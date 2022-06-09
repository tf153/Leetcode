class Solution {
public:
    void DFS(vector<vector<char>>& v,int r,int c)
    {
        if(r<0 || r>=v.size() || c<0 || c>=v[0].size() || v[r][c]=='#' || v[r][c]=='X')
            return ;
        v[r][c]='#';
        DFS(v,r+1,c);
        DFS(v,r-1,c);
        DFS(v,r,c+1);
        DFS(v,r,c-1);
    }
    void solve(vector<vector<char>>& v){
        for(int i=0;i<v.size();i++)
            for(int j=0;j<v[0].size();j++)
                if((i==0 || j==0 || j==v[0].size()-1 || i==v.size()-1) && (v[i][j]=='O'))
                    DFS(v,i,j);
        for(int i=0;i<v.size();i++)
            for(int j=0;j<v[0].size();j++){
               if(v[i][j]=='O')
                   v[i][j]='X';
               if(v[i][j]=='#')
                   v[i][j]='O';
            }
    }
};