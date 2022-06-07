class Solution {
    int merge(vector<int> &nums,int l,int m,int r){
        int count=0;
        vector<int> temp(r-l+1);
        int i=l,j=m+1;
        while(i <= m and j <= r){
            if((long)nums[i] > (long) 2 * nums[j]){
                count += (m - i + 1);
                j++;
            }
            else
                i++;
        }
        int k=0;
        for(i=l,j=m+1;i<=m and j<=r;){
            if(nums[i]>nums[j])
                temp[k++]=nums[j++];
            else
                temp[k++]=nums[i++];
        }
        while(i<=m)
            temp[k++]=nums[i++];
        while(j<=r)
            temp[k++]=nums[j++];
        k=0;
        for(int i=l;i<=r;)
            nums[i++]=temp[k++];
        return count;
    }
    int mergesort(vector<int> &nums,int l,int r){
        int ans=0;
        if(l<r){
            int m=l+(r-l)/2;
            ans=mergesort(nums,l,m);
            ans+=mergesort(nums,m+1,r);
            ans+=merge(nums,l,m,r);
        }
        return ans;
    }
public:
    int reversePairs(vector<int>& nums) {
        int ans= mergesort(nums,0,nums.size()-1);
        return ans;
    }
};