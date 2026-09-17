#include "test_util.h"

#include "../../1979-find-greatest-common-divisor-of-array/1979-find-greatest-common-divisor-of-array.cpp"

int main() {
    Solution s;

    vector<int> a = {2, 5, 6, 9, 10};
    expect_eq("gcd of min and max", s.findGCD(a), 2);

    vector<int> b = {7, 5, 6, 8, 3};
    expect_eq("coprime min and max", s.findGCD(b), 1);

    vector<int> c = {3, 3};
    expect_eq("equal elements", s.findGCD(c), 3);

    vector<int> d = {12};
    expect_eq("single element", s.findGCD(d), 12);

    return report("1979-find-greatest-common-divisor-of-array");
}
