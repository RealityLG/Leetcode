class Solution {
public:
    int minOperations(vector<int>& nums) {
        int länge = nums.size();
        int zähler = 0;
        for (int i = 0; i <= länge - 3; i += 1) {
            if (nums[i] == 0) {
                nums[i] = 1;
                nums[i + 1] = (nums[i + 1] == 1) ? 0 : 1;
                nums[i + 2] = (nums[i + 2] == 1) ? 0 : 1;
                zähler += 1;
            }
        }
        for (int i = 0; i < länge; i += 1) {
            if (nums[i] == 0) {
                return -1;
            }
        }
        return zähler;
    }
};