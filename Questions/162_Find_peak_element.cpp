class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        if(r==0)
            return 0;
        while(l<r-1){
            int m=l+(r-l)/2;
            if(nums[m]>nums[m+1])
                r=m;
            else
                l=m+1;
        }
        return (nums[l]>nums[r]?l:r);
    }
};