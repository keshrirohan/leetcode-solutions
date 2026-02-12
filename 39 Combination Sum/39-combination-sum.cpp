class Solution {
public:

    void findcombination(vector<int>& candidates, int target,vector<int> &ans, vector<vector<int>> &result,int sum,int idx){
        if(sum>target){
            return;
        }
        if(sum==target){

            result.push_back(ans);
            return;
        }
        for(int i=idx;i<candidates.size();i++){

            sum+=candidates[i];
            ans.push_back(candidates[i]);
            findcombination(candidates,target,ans,result,sum,idx);
            int val=ans[ans.size()-1];
            ans.pop_back();
            sum-=val;
            idx++;
            

        }
    }



    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ans;
        vector<vector<int>> result;
        int sum=0,idx=0;
        findcombination(candidates,target,ans,result,sum,idx);
        return result;
    }
};