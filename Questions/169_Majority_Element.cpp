class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int mx=nums[0];
        int count=1;
        for(int i=0;i<nums.size();i++){
            if(mx==nums[i])
                count++;
            else
                count--;
            if(count==0){
                mx=nums[i];
                count++;
            }
        }
        return mx;
    }
};