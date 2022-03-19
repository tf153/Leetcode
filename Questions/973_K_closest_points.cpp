class Solution {
    static bool fun(vector<int> &v1,vector<int> &v2){
        if(v1[0]*v1[0]+v1[1]*v1[1]<v2[0]*v2[0]+v2[1]*v2[1])
            return true;
        return false;
    }
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        sort(points.begin(),points.end(),fun);
        for(int i=0;i<k;i++)
            ans.push_back(points[i]);
        return ans;
    }
};