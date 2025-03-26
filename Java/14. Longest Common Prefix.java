class Solution {
    public String longestCommonPrefix(String[] strs) {
        if (strs == null || strs.length == 0) return "";

        String s = "";
        String one = strs[0];

        for(int i = 1; i < strs.length; i++) {
            while(!strs[i].startsWith(one)) {
                one = one.substring(0, one.length() - 1);
                if(one.isEmpty()) return "";
            } 
        }
        return one;
    }
}