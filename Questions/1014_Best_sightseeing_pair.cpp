class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& val) {
        int n=val.size();
        int prev=INT_MIN;
        int ans=INT_MIN;
        for(int i=1;i<n;i++){
            prev=max(prev,val[i-1]+i-1);
            ans=max(ans,prev+val[i]-i);
        }
        return ans;
    }
};