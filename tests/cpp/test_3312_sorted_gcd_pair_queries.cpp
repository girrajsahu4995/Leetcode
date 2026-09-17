#include "test_util.h"

#include "../../3312-sorted-gcd-pair-queries/3312-sorted-gcd-pair-queries.cpp"

int main() {
    Solution s;

    vector<int> a = {2, 3, 4};
    vector<long long> qa = {0, 2, 2};
    expect_eq("example one", s.gcdValues(a, qa), vector<int>{1, 2, 2});

    vector<int> b = {4, 4, 2, 1};
    vector<long long> qb = {5, 3, 1, 0};
    expect_eq("example two", s.gcdValues(b, qb), vector<int>{4, 2, 1, 1});

    vector<int> c = {2, 2};
    vector<long long> qc = {0};
    expect_eq("single pair", s.gcdValues(c, qc), vector<int>{2});

    vector<int> d = {2, 3, 4};
    vector<long long> qd = {};
    expect_eq("no queries", s.gcdValues(d, qd), vector<int>{});

    return report("3312-sorted-gcd-pair-queries");
}
