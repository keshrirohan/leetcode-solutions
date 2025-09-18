class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0,dig;
        int temp=x;
        bool ispalidrome;
        if(temp>=0){
        while(temp!=0){
            dig=temp%10;
            rev=rev*10+dig;
            temp=temp/10;
            
        }}

        if(rev==x){
            return ispalidrome=true;
        }else{
            return ispalidrome=false;
        }
        return rev;
    }
};