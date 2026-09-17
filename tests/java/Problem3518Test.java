public class Problem3518Test {

    public static void main(String[] args) {
        Solution solution = new Solution();

        TestUtil.expectEquals("second rearrangement", solution.smallestPalindrome("abba", 2), "baab");
        TestUtil.expectEquals("k beyond count", solution.smallestPalindrome("aa", 2), "");
        TestUtil.expectEquals("odd length keeps middle", solution.smallestPalindrome("bacab", 1), "abcba");
        TestUtil.expectEquals("first rearrangement", solution.smallestPalindrome("abba", 1), "abba");

        TestUtil.report("3518-smallest-palindromic-rearrangement-ii");
    }
}
