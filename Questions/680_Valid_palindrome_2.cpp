class Solution {
public:
    bool validPalindrome(string s) {
        int l=0,r=s.size()-1;
        return solve(s,l,r,0);
    }
    bool solve(string s,int l,int r,int count){
        if(count>1)
            return false;
        while(l<r){
            if(s[l]==s[r]){
                l++;
                r--;
            }
            else
                return solve(s,l,r-1,count+1) || solve(s,l+1,r,count+1);
        }
        return true;
    }
};