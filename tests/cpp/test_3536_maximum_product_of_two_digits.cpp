#include "test_util.h"

#include "../../3536-maximum-product-of-two-digits/3536-maximum-product-of-two-digits.cpp"

int main() {
    Solution s;

    expect_eq("two digits", s.maxProduct(31), 3);
    expect_eq("three digits picks two largest", s.maxProduct(124), 8);
    expect_eq("largest digits repeated", s.maxProduct(999), 81);
    expect_eq("zero digit", s.maxProduct(10), 0);
    expect_eq("largest two of many", s.maxProduct(915), 45);

    return report("3536-maximum-product-of-two-digits");
}
