class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;
        int row = rows - 1;
        int col = 0;

        while (row >= 0 && col < cols) {
            if (grid[row][col] < 0) {
                count += cols - col;
                row--;
            } else {
                col++;
            }
        }

        return count;
    }
};