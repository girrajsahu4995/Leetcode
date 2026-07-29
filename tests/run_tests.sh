#!/usr/bin/env bash
# Compiles and runs every unit test in tests/cpp and tests/java.
set -uo pipefail

root="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
build="$root/tests/build"
rm -rf "$build"
mkdir -p "$build"

status=0

for src in "$root"/tests/cpp/test_*.cpp; do
    name="$(basename "$src" .cpp)"
    if ! g++ -std=c++20 -O1 -Wall -o "$build/$name" "$src"; then
        echo "$name: compilation failed"
        status=1
        continue
    fi
    "$build/$name" || status=1
done

# Solutions are stored as bare LeetCode snippets, so the imports and the public
# wrapper a standalone compilation needs are prepended before compiling.
for test_src in "$root"/tests/java/Problem*Test.java; do
    name="$(basename "$test_src" .java)"
    number="$(echo "$name" | sed 's/^Problem//; s/Test$//')"
    solution="$(ls "$root/$number"-*/*.java 2>/dev/null | head -1)"
    if [ -z "$solution" ]; then
        echo "$name: no matching solution file found"
        status=1
        continue
    fi
    out="$build/$name"
    mkdir -p "$out"
    { echo 'import java.util.*;'; cat "$solution"; } > "$out/Solution.java"
    cp "$test_src" "$root/tests/java/TestUtil.java" "$out/"
    if ! javac -d "$out" "$out/Solution.java" "$out/TestUtil.java" \
        "$out/$(basename "$test_src")"; then
        echo "$name: compilation failed"
        status=1
        continue
    fi
    java -cp "$out" "$name" || status=1
done

exit $status
