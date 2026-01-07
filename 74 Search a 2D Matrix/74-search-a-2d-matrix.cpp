class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s = 0;
        int row = matrix.size();
        int col = matrix[0].size();
        int e = (row * col)-1, mid, i, j;
        while (s <= e) {
            mid = s + (e - s) / 2;
            i = mid / col;
            j = mid % col;
            
            if (matrix[i][j] == target) {
                return 1;
            } else if (matrix[i][j] < target) {
                s = mid +1 ;
            } else {
                e = mid-1;
            }
        }
        return false;
    }
};