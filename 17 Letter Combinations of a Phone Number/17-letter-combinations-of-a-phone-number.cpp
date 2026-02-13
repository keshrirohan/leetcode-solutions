class Solution {
public:

    void calc(string &digits , string &output,vector<string> &ans,vector<string> &mapping,int idx){

        if(idx>=digits.size()) {
            ans.push_back(output);
            return;
        }

        string s =  mapping[digits[idx]-'0'];


       for(int i=0;i<s.size();i++){
        output.push_back(s[i]);
        calc(digits,output,ans,mapping,idx+1);
        output.pop_back();
       }
    }

    vector<string> letterCombinations(string digits) {
    string output;
    vector<string> ans;
    vector<string> mapping={"","","abc" ,"def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int idx=0;
    calc(digits,output,ans,mapping,idx);
    return ans;



    }
};