class Solution {
private:
    void dfs(int i, int j, int m, int n, vector<vector<int>>& grid,vector<vector<int>>& vis,  int tot){
        if(vis[i][j]) return;
        if(i<0||j<0||i>=m||j>=n){
            tot--;
        }
        vis[i][j] = 1;
        dfs(i+1,j,m,n,grid,vis, tot);
        dfs(i-1,j,m,n,grid,vis, tot);
        dfs(i,j-1,m,n,grid,vis, tot);
        dfs(i,j+1,m,n,grid,vis, tot);
    }
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size(), tot = 0;
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (grid[i][j]==1)
                {
                    tot++;
                }
            }
        }
        vector<vector<int>> vis(m, std::vector<int>(n,0));
        for (int i = 0; i < m; ++i)
        {
            if(grid[i][0]==1&& !vis[i][0]){
                dfs(i,0,m,n,grid,vis,tot);
            }
        }
        for (int i = 0; i < m; ++i)
        {
            if(grid[i][n-1]==1&& !vis[i][n-1]){
                dfs(i,n-1,m,n,grid,vis,tot);
            }
        }
        for (int i = 0; i < n; ++i)
        {
            if(grid[0][i]==1&& !vis[0][i]){
                dfs(0,i,m,n,grid,vis,tot);
            }
        }
        for (int i = 0; i < n; ++i)
        {
            if(grid[m-1][i]==1&& !vis[m-1][i]){
                dfs(m-1,i,m,n,grid,vis,tot);
            }
        }
        return tot;
    }
};