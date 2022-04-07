class Solution {
    int solve(priority_queue<int> &pq){
        if(pq.size()==0)
            return 0;
        if(pq.size()==1)
            return pq.top();
        int first=pq.top();
        pq.pop();
        int second=pq.top();
        pq.pop();
        if(abs(first-second))
            pq.push(abs(first-second));
        return solve(pq);
    }
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(),stones.end());
        return solve(pq);
    }
};