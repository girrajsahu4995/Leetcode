public class Problem3517Test {

    public static void main(String[] args) {
        Solution solution = new Solution();

        TestUtil.expectEquals("single character", solution.smallestPalindrome("z"), "z");
        TestUtil.expectEquals("odd length", solution.smallestPalindrome("babab"), "abbba");
        TestUtil.expectEquals("even length", solution.smallestPalindrome("daccad"), "acddca");
        TestUtil.expectEquals("already smallest", solution.smallestPalindrome("abba"), "abba");

        TestUtil.report("3517-smallest-palindromic-rearrangement-i");
    }
}
