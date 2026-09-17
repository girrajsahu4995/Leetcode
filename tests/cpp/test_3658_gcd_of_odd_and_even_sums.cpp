#include "test_util.h"

#include "../../3658-gcd-of-odd-and-even-sums/3658-gcd-of-odd-and-even-sums.cpp"

int main() {
    Solution s;

    expect_eq("n = 1", s.gcdOfOddEvenSums(1), 1);
    expect_eq("n = 4", s.gcdOfOddEvenSums(4), 4);
    expect_eq("n = 7", s.gcdOfOddEvenSums(7), 7);

    expect_eq("gcd with zero", s.gcd(12, 0), 12);
    expect_eq("gcd coprime", s.gcd(9, 4), 1);
    expect_eq("gcd smaller first", s.gcd(4, 12), 4);

    return report("3658-gcd-of-odd-and-even-sums");
}
