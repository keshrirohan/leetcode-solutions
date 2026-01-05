class Solution {
public:
    string removeDuplicates(string s) {
        int i = 0;
        while (i < s.size() - 1) {
            if (i >= s.size()) break;
            if (s[i] == s[i + 1]) {
                s.erase(i, 2);
                if (i > 0) {
                    i--;   // step back to re-check new neighbors
                }
            } else {
                i++;       // move forward only when no erase
            }
        }
        return s;
    }
};
