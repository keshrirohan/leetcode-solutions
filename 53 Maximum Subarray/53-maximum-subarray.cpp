class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN;
        int maxsum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(sum<=0){
                sum=0;
            }
            sum+=nums[i];
            if(maxsum<=sum){
                maxsum=sum;
            }
        }
        return maxsum;
    }
};