class Solution {
public:
    bool helper(vector<vector<int>>& grid, int r, int c, int n, int expVal) {
        if (r < 0 || r >= n || c < 0 || c >= n || grid[r][c] != expVal)
            return false;

        if (expVal == n * n - 1)
            return true;

        return helper(grid, r - 2, c + 1, n, expVal + 1) ||
               helper(grid, r - 2, c - 1, n, expVal + 1) ||
               helper(grid, r - 1, c + 2, n, expVal + 1) ||
               helper(grid, r - 1, c - 2, n, expVal + 1) ||
               helper(grid, r + 2, c + 1, n, expVal + 1) ||
               helper(grid, r + 2, c - 1, n, expVal + 1) ||
               helper(grid, r + 1, c + 2, n, expVal + 1) ||
               helper(grid, r + 1, c - 2, n, expVal + 1);
    }

    bool checkValidGrid(vector<vector<int>>& grid) {
        return helper(grid, 0, 0, grid.size(), 0);
    }
};
