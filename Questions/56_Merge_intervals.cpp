class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        int i=0;
        int n=intervals.size();
        int s=intervals[i][0],e=intervals[i][1];
        while(i<n){
            if(intervals[i][0]<=e)
                e=max(e,intervals[i][1]);
            else{
                ans.push_back(vector<int>{s, e});
                s=intervals[i][0];
                e=intervals[i][1];
            }
            i++;
        }
        ans.push_back(vector<int>{s, e});
        return ans;
    }
};