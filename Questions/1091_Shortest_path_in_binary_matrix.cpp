class Solution {
    int solve(vector<vector<int>> & mat,vector<vector<bool>> &visited,int n){
        if(n==1 and mat[0][0]==0)
            return 1;
        if(n==1)
            return -1;
        if(mat[0][0] or mat[n-1][n-1])
            return -1;
        vector<pair<int,int>> dir={{-1,-1},{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1}};
        queue<pair<int,int>> que;
        que.push({0,0});
        visited[0][0]=true;
        int ans=0;
        while(!que.empty()){
            int len=que.size();
            for(int i=0;i<len;i++){
                pair<int,int> curr=que.front();
                que.pop();
                for(pair<int,int> p:dir){
                    int x=curr.first+p.first,y=curr.second+p.second;
                    if(x==n-1 and y==n-1)
                        return ans+2;
                    if(x>=0 and x<n and y>=0 and y<n and !mat[x][y] and !visited[x][y]){
                        que.push({x,y});
                        visited[x][y]=true;
                    }
                }
            }
            ans++;
        }
        return -1;
    }
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<bool>> visited(n,vector<bool>(n,false));
        return solve(grid,visited,n);        
    }
};
