class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    vector<int> ans(nums.size(),0);
    int s=0,e=nums.size()-1,po=e;
    for(int i=0;i<nums.size();i++){
       nums[i]=nums[i]*nums[i];
    }
    while(s<=e){
        if(nums[s]>=nums[e]){
            ans[po]=nums[s];
            s++;
        }else if(nums[s]<nums[e]){
            ans[po]=nums[e];
            e--;
        }
        po--;
        
    }
   
    return ans;
    }
};