class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        set<int> st(nums.begin(),nums.end());
        nums=vector<int>(st.begin(),st.end());
        int ans=1;
        int i,j;
        for(i=0;i<nums.size();){
            for(j=i+1;j<nums.size();){
                if(nums[j]==nums[j-1]+1){
                    ans=max(j-i+1,ans);
                    j++;
                }
                else
                    break;
            }
            i=j;
        }
        return ans;
    }
};