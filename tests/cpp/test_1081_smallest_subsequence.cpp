#include "test_util.h"

#include "../../1081-smallest-subsequence-of-distinct-characters/1081-smallest-subsequence-of-distinct-characters.cpp"

int main() {
    Solution s;

    expect_eq<string>("bcabc", s.smallestSubsequence("bcabc"), "abc");
    expect_eq<string>("cbacdcbc", s.smallestSubsequence("cbacdcbc"), "acdb");
    expect_eq<string>("single character", s.smallestSubsequence("a"), "a");
    expect_eq<string>("all duplicates", s.smallestSubsequence("aaaa"), "a");
    expect_eq<string>("already sorted and distinct",
                      s.smallestSubsequence("abcd"), "abcd");
    expect_eq<string>("reverse sorted", s.smallestSubsequence("dcba"), "dcba");

    return report("1081-smallest-subsequence-of-distinct-characters");
}
