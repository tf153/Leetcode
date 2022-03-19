class Solution {
    void visit(vector<vector<char>> &grid,int i,int j,int m,int n){
        if(i<0 or i>=m or j<0 or j>=n or grid[i][j]=='0' or grid[i][j]=='2')
            return;
        grid[i][j]='2';
        visit(grid,i-1,j,m,n);
        visit(grid,i,j-1,m,n);
        visit(grid,i+1,j,m,n);
        visit(grid,i,j+1,m,n);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size(),n=grid[0].size();
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    ans++;
                    visit(grid,i,j,m,n);
                }
            }
        }
        return ans;
    }
};