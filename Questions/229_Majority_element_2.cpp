class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n1=INT_MIN,n2=INT_MIN,c1=0,c2=0;
        for(int n:nums){
            if(n==n1)
                c1++;
            else if(n==n2)
                c2++;
            else if(c1==0){
                n1=n;
                c1++;
            }
            else if(c2==0){
                n2=n;
                c2++;
            }
            else{
                c1--;
                c2--;
            }
        }
        vector<int> ans;
        int count=0;
        for(int n:nums)
            if(n==n1)
                count++;
        if(count>nums.size()/3)
            ans.push_back(n1);
        count=0;
        for(int n:nums)
            if(n==n2)
                count++;
        if(count>nums.size()/3)
            ans.push_back(n2);
        return ans;
    }
};