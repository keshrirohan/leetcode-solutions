class Solution {
public:

    void subset(vector<int>& nums,vector<int> &ans,vector<vector<int>> &finalans , int i){
        int n=nums.size();

        if(i>=n){
            finalans.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        subset(nums,ans,finalans,i+1);

        ans.pop_back();


        int idx=i+1;
        while( idx < n && nums[idx]==nums[idx-1] ) idx++;
        subset(nums,ans,finalans,idx);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> finalans;
        int i=0;
       sort(nums.begin(), nums.end());
        subset(nums,ans,finalans,i);
        return finalans;
    }
};