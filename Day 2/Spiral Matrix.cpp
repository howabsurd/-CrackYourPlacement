class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if (matrix.empty() || matrix[0].empty()) {
            return res;
        }

        int top = 0, bottom = matrix.size() - 1, left = 0, right = matrix[0].size() - 1;

        while (top <= bottom && left <= right) {
            // Traverse from left to right along the top row
            for (int i = left; i <= right; i++) {
                res.push_back(matrix[top][i]);
            }
            top++;

            // Traverse from top to bottom along the rightmost column
            for (int i = top; i <= bottom; i++) {
                res.push_back(matrix[i][right]);
            }
            right--;

            // Check if there are more rows to traverse
            if (top <= bottom) {
                // Traverse from right to left along the bottom row
                for (int i = right; i >= left; i--) {
                    res.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            // Check if there are more columns to traverse
            if (left <= right) {
                // Traverse from bottom to top along the leftmost column
                for (int i = bottom; i >= top; i--) {
                    res.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return res;
    }
};