class Solution {
public:
    int triangularSum(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        int zähler = 0;
        while (zähler < nums.size() - 1) {
            for (int i = 0; i < nums.size() - zähler - 1; i += 1) {
                nums[i] = (nums[i] + nums[i + 1]) % 10;
            }
            zähler += 1;
        }
        return nums[0];
    }
};