class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()>t.size()){
            return false;
        }
        int i=0,j=0;
        int count=0;
        
        while(i<s.size() && j<t.size()  ){
            if(s[i]==t[j]){
                cout<<s[i]<<" match "<<t[j]<<endl;
                count++;
                i++;
                j++;
            }else{
                j++;
            }

        }
        if(s.size()==count){
            return true;
        }
        return false;
    }
};