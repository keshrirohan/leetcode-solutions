class Solution {
public:
    void permucalculate(vector<int> &nums,vector<int> &ans,vector<vector<int>> &finalans){
        int n=nums.size();
        if(ans.size()>=nums.size()){
            finalans.push_back(ans);
            return;
        }
        for(int i=0;i<n;i++){
            if(find(ans.begin(),ans.end(),nums[i])!=ans.end()){
                continue;
            }
            ans.push_back(nums[i]);
            permucalculate(nums,ans,finalans);
            ans.pop_back();

        }

    }


    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> finalans;
        permucalculate(nums, ans ,finalans);
        return finalans;
    }
};