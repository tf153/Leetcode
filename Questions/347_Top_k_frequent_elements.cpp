class Solution {
    static bool fun(pair<int,int> p1,pair<int,int> p2){
        return p1.second>p2.second;
    }
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int n:nums)
            mp[n]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>> > pq;
        for(pair<int,int> p:mp){
            pq.push({p.second,p.first});
            if(pq.size()>k)
                pq.pop();
        }
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }            
        return ans;
    }
};