class Solution {
    public int searchInsert(int[] nums, int target) {
        for(int i = 0; i < nums.length; i++) {
            if(nums[i] == target) {
                return i;
            }
        }
        for(int x = 0; x < nums.length; x++) {
            if(target < nums[x]) {
                return x;
            }
        }
        return nums.length;
    }
}