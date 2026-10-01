class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board[0].size();

        for (int i = 0; i < n; i++) {
            unordered_map<char, int> mp;
            for (int j = 0; j < n; j++) {

                if (mp.find(board[i][j]) != mp.end() && board[i][j] != '.') {
                    return false;
                }
                mp[board[i][j]] = j;
            }
        }

        for (int i = 0; i < n; i++) {
            unordered_map<char, int> mp;
            for (int j = 0; j < n; j++) {
                if (mp.find(board[j][i]) != mp.end() && board[j][i] != '.') {

                    return false;
                }

                mp[board[j][i]] = i;
            }
        }
        int m = sqrt(n);
        for (int i = 0; i < n; i = i + m) {
            for (int j = 0; j < n; j = j + m) {

                unordered_map<char, int> mp;
                for (int k = 0; k < m; k++) {
                    for (int l = 0; l < m; l++) {
                    
                        if (mp.find(board[i + k][j + l]) != mp.end()&& board[i+k][j+l]!='.'){
                            return false;
                        }
                     mp[board[i + k][j + l]]=j+l;
                    }
                    cout << endl;
                }
                cout << endl;
            }
        }

        return true;
    }
};