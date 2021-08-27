class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        set<int> row,column;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    row.insert(i);
                    column.insert(j);
                }
            }
        }
        for(auto itr=row.begin();itr!=row.end();itr++){
            for(int i=0;i<n;i++){
                matrix[*itr][i]=0;
            }
        }
        for(auto itr=column.begin();itr!=column.end();itr++){
            for(int i=0;i<m;i++){
                matrix[i][*itr]=0;
            }
        }
    }
};