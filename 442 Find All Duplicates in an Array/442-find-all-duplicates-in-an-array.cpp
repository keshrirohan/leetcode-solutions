class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int ans = 0;
        vector<int> final;
        sort(nums.begin(),nums.end());
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i-1]!=nums[i]) {
                ans ^= nums[i];
            } else {
                final.push_back(nums[i]);
                ans = 0;
            }
        }
        return final;
    }
};