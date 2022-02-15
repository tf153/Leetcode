int singleNumber(vector<int>& nums) {
        return accumulate(nums.begin(),nums.end(),0,[&](int a,int b)->int{return a^b;});
    }