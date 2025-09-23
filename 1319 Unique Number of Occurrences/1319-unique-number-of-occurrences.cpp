class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<int> ans;
        int count = 1;

        // Count frequencies
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] == arr[i - 1]) {
                count++;
            } else {
                ans.push_back(count);
                count = 1;
            }
        }
        ans.push_back(count); // push the last frequency

        // Check uniqueness
        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size() - 1; i++) {
            if (ans[i] == ans[i + 1]) {
                return false;
            }
        }
        return true;
    }
};
