class Solution {
    void solve(vector<vector<int>> &graph,int i,int n,vector<vector<int>> &ans,vector<int> temp){
        if(i==n){
            ans.push_back(temp);
            return;
        }
        for(int a:graph[i]){
            temp.push_back(a);
            solve(graph,a,n,ans,temp);
            temp.pop_back();
        }
        return;
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        int n=graph.size();
        vector<int> temp={0};
        solve(graph,0,n-1,ans,temp);
        return ans;
    }
};