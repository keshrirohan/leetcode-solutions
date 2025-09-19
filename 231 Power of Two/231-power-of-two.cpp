class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans=1;
        if (n >= 0) {
            for (int i = 0; i < 32; i++) {
                if (ans == n) {
                    return true;
                }
                if(ans>INT_MAX/2) return false;
                ans=ans*2;
            }
            return false;
        } else {
            return false;
        }
    }
};