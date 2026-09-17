class Solution {
   public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // first we transpose the matrix
        for (int r = 0; r < n; r++) {
            for (int c = r + 1; c < n;
                 c++) {  // this was the real key here,doing c = r + 1; so that we only swap once.
                swap(matrix[r][c], matrix[c][r]);
            }
        }
        // then we reverse the matrix
        for (int r = 0; r < n; r++) {
            reverse(matrix[r].begin(), matrix[r].end());
        }
    }
};
