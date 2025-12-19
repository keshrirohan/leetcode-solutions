class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) {
            return x;
        }
        int s = 0, e = x;
        long long mid;
        int ans=0;
        while (s <= e) {
            mid = s + (e - s) / 2;
            if (mid * mid == x) {
                return mid;
            } else if (mid * mid > x) {
                e = mid - 1;
            } else if (mid * mid < x) {
                ans = mid;
                s = mid + 1;
            }
        }
        return ans;
    }
};