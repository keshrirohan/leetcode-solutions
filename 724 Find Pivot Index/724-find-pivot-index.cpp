class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int size=nums.size();
        int sum=0;
        int lsum=0;
        
        for(int i=0;i<size;i++){
            sum+=nums[i];
        }
        int rsum=sum;
        for(int j=0;j<size;j++){
            rsum-=nums[j];
            if(lsum==rsum){
                return j;
            }
            lsum+=nums[j];
    
        }
        return -1;
    }
};