class Solution {
public:

    void solve(int open,int close,int n,string output,vector<string> &ans){
        if(open==n && close ==n){
            ans.push_back(output);
            return ;
        }

        if(open<n){
            output.push_back('(');
            solve(open+1,close,n,output,ans);
            output.pop_back();
        }
        if(close<open){
            output.push_back(')');
            solve(open,close+1,n,output,ans);
            output.pop_back();
        }

    }
    vector<string> generateParenthesis(int n) {
        int open=0, close=0;
        string output;
        vector<string> ans;
        solve(open,close,n,output,ans);
        return ans;
    }
};