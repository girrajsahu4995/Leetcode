public class Problem1464Test {

    public static void main(String[] args) {
        Solution solution = new Solution();

        TestUtil.expectEquals("example one", solution.maxProduct(new int[] {3, 4, 5, 2}), 12);
        TestUtil.expectEquals("duplicated maximum", solution.maxProduct(new int[] {1, 5, 4, 5}), 16);
        TestUtil.expectEquals("two elements", solution.maxProduct(new int[] {3, 7}), 12);
        TestUtil.expectEquals("all ones", solution.maxProduct(new int[] {1, 1, 1}), 0);

        TestUtil.report("1464-maximum-product-of-two-elements-in-an-array");
    }
}
