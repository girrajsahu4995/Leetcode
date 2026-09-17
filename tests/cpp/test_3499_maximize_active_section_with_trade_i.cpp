#include "test_util.h"

#include "../../3499-maximize-active-section-with-trade-i/3499-maximize-active-section-with-trade-i.cpp"

int main() {
    Solution s;

    expect_eq("single zero block", s.maxActiveSectionsAfterTrade("01"), 1);
    expect_eq("two zero blocks", s.maxActiveSectionsAfterTrade("0100"), 4);
    expect_eq("trade merges blocks", s.maxActiveSectionsAfterTrade("1000100"),
              7);
    expect_eq("alternating", s.maxActiveSectionsAfterTrade("01010"), 4);
    expect_eq("all ones", s.maxActiveSectionsAfterTrade("111"), 3);
    expect_eq("all zeros", s.maxActiveSectionsAfterTrade("000"), 0);

    return report("3499-maximize-active-section-with-trade-i");
}
