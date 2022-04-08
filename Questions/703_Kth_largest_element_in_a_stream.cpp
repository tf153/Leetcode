class KthLargest {
    priority_queue<int,vector<int>, greater<int>> pq;
    int K;
public:
    KthLargest(int k, vector<int>& nums) {
        for(int n:nums)
            pq.push(n);
        while(pq.size()>k)
            pq.pop();
        K=k;
    }
    
    int add(int val) {
        pq.push(val);
        while(pq.size()>K)
            pq.pop();
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */