class Solution {
public:
    int scoreOfString(string s) {
         int score=0;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]){
                continue;
            }
            int prev=s[i-1];
            int curr=s[i];
            int diff=(prev-curr);
            if(diff<0){
                score-=diff;
            }else{
                score+=diff;
            }
            

        }
        return score;
    }
};