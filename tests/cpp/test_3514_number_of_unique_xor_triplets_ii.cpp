#include "test_util.h"

#include "../../3514-number-of-unique-xor-triplets-ii/3514-number-of-unique-xor-triplets-ii.cpp"

static int bruteForce(vector<int> nums) {
    set<int> seen;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = j; k < n; k++) {
                seen.insert(nums[i] ^ nums[j] ^ nums[k]);
            }
        }
    }
    return seen.size();
}

int main() {
    Solution s;

    vector<int> a = {1, 3};
    expect_eq("two elements", s.uniqueXorTriplets(a), 2);

    vector<int> b = {6, 7, 8, 9};
    expect_eq("four elements", s.uniqueXorTriplets(b), 4);

    vector<int> c = {5};
    expect_eq("single element", s.uniqueXorTriplets(c), 1);

    vector<int> d = {2, 2, 2};
    expect_eq("all equal", s.uniqueXorTriplets(d), 1);

    vector<int> e = {1, 2, 4, 7, 11};
    expect_eq("matches brute force", s.uniqueXorTriplets(e), bruteForce(e));

    return report("3514-number-of-unique-xor-triplets-ii");
}
