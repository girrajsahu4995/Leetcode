#include "test_util.h"

#include "../../3867-sum-of-gcd-of-formed-pairs/3867-sum-of-gcd-of-formed-pairs.cpp"

int main() {
    Solution s;

    vector<int> a = {1, 2, 3};
    expect_eq<long long>("increasing values", s.gcdSum(a), 1);

    vector<int> b = {4, 2};
    expect_eq<long long>("two elements", s.gcdSum(b), 2);

    vector<int> c = {5};
    expect_eq<long long>("single element has no pair", s.gcdSum(c), 0);

    vector<int> d = {6, 6, 6, 6};
    expect_eq<long long>("all equal", s.gcdSum(d), 12);

    return report("3867-sum-of-gcd-of-formed-pairs");
}
