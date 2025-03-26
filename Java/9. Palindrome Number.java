class Solution {
    public boolean isPalindrome(int x) {
        String r = String.valueOf(x);
        for(int i = 0; i < r.length(); i++) {
            if(r.charAt(i) != r.charAt(r.length()- 1 - i)) {
                return false;
            }
        } 
        return true;
    }
}