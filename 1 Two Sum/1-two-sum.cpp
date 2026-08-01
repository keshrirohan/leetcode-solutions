class Solution {
public: 
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int tar;
        
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            tar= target-nums[i];
            if(m.find(tar) != m.end()){
                ans.push_back(i);
                ans.push_back(m[tar]);
               
            }
             m[nums[i]]=i;
        }

        return ans;
    }
};