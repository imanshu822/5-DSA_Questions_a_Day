class Solution {
    public String shortestPalindrome(String s) {
        String revS = new StringBuilder(s).reverse().toString();  

        int n = s.length();
        int i = 0;

        for (; i < n; i++) {
            if (s.substring(0, n - i).equals(revS.substring(i))) {
                break;
            }
        }

        return revS.substring(0, i) + s;
    }
}
