class Solution {
public:
    int reverse(int x) {
        int dig;
        int rev=0;
        while(x!=0){
            if(INT_MAX/10 < rev || INT_MIN/10>rev) return 0;
            dig=x%10;
            rev=rev*10+dig;
            x/=10;
       }
       return rev;
    }   
};