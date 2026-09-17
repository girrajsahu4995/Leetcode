#include "test_util.h"

#include "../../3501-maximize-active-section-with-trade-ii/3501-maximize-active-section-with-trade-ii.cpp"

int main() {
    Solution s;

    vector<vector<int>> q1 = {{0, 1}};
    expect_eq("single zero block", s.maxActiveSectionsAfterTrade("01", q1),
              vector<int>{1});

    vector<vector<int>> q2 = {{0, 3}};
    expect_eq("two zero blocks in range",
              s.maxActiveSectionsAfterTrade("0100", q2), vector<int>{4});

    vector<vector<int>> q3 = {{1, 5}};
    expect_eq("trade inside substring",
              s.maxActiveSectionsAfterTrade("1000100", q3), vector<int>{6});

    vector<vector<int>> q4 = {{0, 3}, {0, 2}, {1, 1}};
    expect_eq("multiple queries",
              s.maxActiveSectionsAfterTrade("01010", q4),
              vector<int>{4, 4, 2});

    vector<vector<int>> q5 = {{0, 2}};
    expect_eq("all ones", s.maxActiveSectionsAfterTrade("111", q5),
              vector<int>{3});

    SegmentTree seg(vector<int>{3, 1, 4, 1, 5});
    expect_eq("segment tree full range", seg.query(0, 4), 5);
    expect_eq("segment tree sub range", seg.query(1, 3), 4);
    expect_eq("segment tree empty range", seg.query(3, 2), 0);

    return report("3501-maximize-active-section-with-trade-ii");
}
