#pragma once

#include <bits/stdc++.h>

using namespace std;

namespace testutil {

inline int failures = 0;
inline int checks = 0;

template <typename T>
string repr(const T& value) {
    ostringstream out;
    out << value;
    return out.str();
}

inline string repr(const string& value) { return "\"" + value + "\""; }

template <typename T>
string repr(const vector<T>& values) {
    ostringstream out;
    out << "[";
    for (size_t i = 0; i < values.size(); i++) {
        if (i) out << ", ";
        out << repr(values[i]);
    }
    out << "]";
    return out.str();
}

template <typename T>
void expect_eq(const string& name, const T& actual, const T& expected) {
    checks++;
    if (actual == expected) return;
    failures++;
    cerr << "  FAIL " << name << ": expected " << repr(expected) << ", got "
         << repr(actual) << "\n";
}

inline int report(const string& suite) {
    if (failures) {
        cerr << suite << ": " << failures << " of " << checks
             << " checks failed\n";
        return 1;
    }
    cout << suite << ": " << checks << " checks passed\n";
    return 0;
}

}  // namespace testutil

using testutil::expect_eq;
using testutil::report;
