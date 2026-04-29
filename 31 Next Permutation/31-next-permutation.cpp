class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()<2){
            return ;
        }

        int i = nums.size()-2, pivot =i-1;
        int j = nums.size() - 1;
        while (i>=0 &&  nums[i]>=nums[i+1]) {
            i--;
        }
            pivot = i;  
  
      
        if(pivot<0){
                reverse(nums.begin(), nums.end());
            return;
        }else{
       

         
        while (j > pivot) {
            if (nums[j] > nums[pivot]) {
                swap(nums[j], nums[pivot]);
                break;
            }
            j--;
        }
         
       
      

            reverse(nums.begin() + pivot+1, nums.end());
        }
    }
};