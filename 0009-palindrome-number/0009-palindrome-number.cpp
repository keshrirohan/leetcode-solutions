class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int n=x;
        long long ans=0;
        while(n!=0){
            
            
            ans=ans*10+n%10;
            
            n/=10;

        }
        cout<<ans;
        if(x==ans){
            return true;
        }
        return false;
    }
};