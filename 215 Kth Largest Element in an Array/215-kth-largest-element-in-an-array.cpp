class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int ,vector<int>, greater<int>> h;
        for (int i = 0; i < k; i++) {
            h.push(nums[i]);
        }
        for (int i = k; i < nums.size(); i++) {
           if(nums[i]>h.top()){
            h.pop();
            h.push(nums[i]);
           }
        }
        return h.top();
    }
};