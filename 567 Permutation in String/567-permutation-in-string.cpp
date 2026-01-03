class Solution {
public:

bool issame(vector<int> a, vector<int> b){
    for(int i=0;i<26;i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}
    bool checkInclusion(string s1, string s2) {


        //track freq of  the s1 value 
        vector<int> freq1(26,0);
        int idx;
        for(int i=0;i<s1.size();i++){
            idx = s1[i]-'a';
            freq1[idx]++;
        }

        int windidx=0,windsize=s1.size();
        vector<int>freq2;
        // checking the value from window 
        for(int i=0;i<s2.size();i++){
             idx=i,windidx=0;
            freq2.assign(26,0);
            while(windidx < windsize && idx < s2.size()){
                freq2[s2[idx]-'a']++;
                idx++;
                windidx++;
            }
            if(issame(freq1,freq2)){
                return true;
            }


        }
    return false;        




        
    }
};