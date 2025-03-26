class Solution {
public:
    std::vector<int> einfuegen(vector<int>& nums, int x) {
        if(nums.empty()) {
            nums.push_back(x);
        } else {
            auto pos = std::lower_bound(nums.begin(), nums.end(), x);
            nums.insert(pos,x);
        }
        return nums;
    }


    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        std::vector<int> nums;
        //zahlen von nums1 in nums übertragen außer 0en
        for(int i = 0; i < m; i += 1) {
            if (nums1[i] != 0) nums.push_back(nums1[i]);
        }

        //zahlen von nums2 in nums einzeln einfügen
        for(int i = 0; i < nums2.size(); i += 1) {
            if(nums2[i] != 0) nums = einfuegen(nums, nums2[i]);
        }
        nums1 = nums;
        int zeros_to_add = (m + n) - nums1.size();
        for (int i = 0; i < zeros_to_add; i++) {
            auto pos = std::lower_bound(nums1.begin(), nums1.end(), 0);
            nums1.insert(pos, 0);
        }
    }
};