class Solution {
    public int removeDuplicates(int[] nums) {
        // Wenn das Array leer ist, gibt es keine Duplikate
        if (nums.length == 0) {
            return 0;
        }

        int j = 1;

        for (int i = 1; i < nums.length; i++) {
            // Überprüfe, ob das aktuelle Element unterschiedlich zum vorherigen ist
            if (nums[i] != nums[i - 1]) {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
}