class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        ans.push_back({1});
        for(int i=2;i<=n;i++){
            vector<int> temp;
            temp.push_back(1);
            vector<int> v2=ans.back();
            for(int j=0;j<i-2;j++){
                temp.push_back(v2[j]+v2[j+1]);
            }
            temp.push_back(1);
            ans.push_back(temp);
        }
        return ans;
    }
};