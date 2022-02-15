class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty())
            return 0;
        int ans=INT_MIN;
        int mn=prices[0];
        for(int p:prices){
            if(mn>p)
                mn=p;
            ans=max(ans,p-mn);
        }
        return ans;
    }
};