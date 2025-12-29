class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0, pivot = 0;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                count++;
            } else if (nums[i] == nums[i + 1]) {
                count++;
            }
        }
        if (count == (n - 1)) {
            return true;
        }
        for (int i = 0; i < n; i++) {
            if (nums[i] <= nums[(i + 1) % n]) {

            } else {
                pivot++;
            }
        }
        if (pivot == 1) {
            return true;
        }

        return false;

        return true;
    }
};