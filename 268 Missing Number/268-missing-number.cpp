class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int totalsum = 0;
       
        for (int i : nums) {
            sum += i;
          
        }
        int size = nums.size();
        for (int i = 0; i <= size; i++) {
            totalsum += i;
        }

        return totalsum - sum;
    }
};