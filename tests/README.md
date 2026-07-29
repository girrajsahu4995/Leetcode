# Tests

Unit tests for every solution in this repository.

```bash
./tests/run_tests.sh
```

Requires `g++` (C++20) and a JDK 17+. No external test framework is used:
`tests/cpp/test_util.h` and `tests/java/TestUtil.java` provide the assertions.

- C++ tests live in `tests/cpp/test_<problem>.cpp` and `#include` the solution
  file directly.
- Java tests live in `tests/java/Problem<number>Test.java`. The runner prepends
  `import java.util.*;` to the solution snippet before compiling it, since the
  files are stored exactly as submitted to LeetCode.

To cover a new problem, add a test file following those naming conventions.
