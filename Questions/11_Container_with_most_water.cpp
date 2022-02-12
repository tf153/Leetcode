class Solution {
public:
    int maxArea(vector<int>& h) {
        int l=0,r=h.size()-1;
        int ans=INT_MIN;
        while(l<r){
            ans=max(ans,min(h[l],h[r])*(r-l));
            if(h[l]<h[r])
                l++;
            else
                r--;
        }
        return ans;
    }
};