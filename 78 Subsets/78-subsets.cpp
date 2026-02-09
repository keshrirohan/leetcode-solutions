class Solution {
public:
    void subs(vector<int> &nums,vector<int> &ans,int i,vector<vector<int>> &finalans){
        int n=nums.size();
        if(i>=n){
             finalans.push_back(ans);
             return;
        }
        ans.push_back(nums[i]);
        subs(nums,ans,i+1,finalans);
        ans.pop_back();
        subs(nums,ans,i+1,finalans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
    int i=0;
    vector<int> ans;
    vector<vector<int>> finalans;
    subs(nums,ans,i,finalans);
    return finalans;
    }
};