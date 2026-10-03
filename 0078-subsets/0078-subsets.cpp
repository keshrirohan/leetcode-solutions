class Solution {
    void allsubset(vector<int>& nums, vector<vector<int>>& ans, vector<int>& temp, int i) {
        if (i == nums.size()) {
            ans.push_back(temp);
            return;
        }

        temp.push_back(nums[i]);
        allsubset(nums, ans, temp, i + 1);

        temp.pop_back();
        
        allsubset(nums, ans, temp, i + 1);
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        int i = 0;
        allsubset(nums, ans, temp, i);
        return ans;
    }
};