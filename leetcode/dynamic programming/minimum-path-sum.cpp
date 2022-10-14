// 64. Minimum Path Sum
// Medium

// 8794

// 113

// Add to List

// Share
// Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right, which minimizes the sum of all numbers along its path.

// Note: You can only move either down or right at any point in time.

 

// Example 1:


// Input: grid = [[1,3,1],[1,5,1],[4,2,1]]
// Output: 7
// Explanation: Because the path 1 → 3 → 1 → 1 → 1 minimizes the sum.
// Example 2:

// Input: grid = [[1,2,3],[4,5,6]]
// Output: 12
 

// Constraints:

// m == grid.length
// n == grid[i].length
// 1 <= m, n <= 200
// 0 <= grid[i][j] <= 100

class Solution {
public:
    int solve(vector<vector<int>>&grid,int n,int m, int i,int j, vector<vector<int>>&dp){
        if(i<0 || j<0 || i>=n || j>=m)return 100000000;
        if(dp[i][j]!=-1)return dp[i][j];
        if(i==n-1 && j==m-1){
            return grid[i][j];
        }
        int ans=solve(grid,n,m,i,j+1, dp)+grid[i][j];
        ans=min(ans,solve(grid,n,m,i+1,j, dp)+grid[i][j]);
        dp[i][j]=ans;
        return ans;
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return solve(grid,n,m,0,0,dp);
    }
};