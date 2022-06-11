class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,ans=0,n=s.size();
        unordered_map<char,int> mp;
        while(j<n){
            if(mp.find(s[j])!=mp.end())
                i=max(i,mp[s[j]]+1);
            mp[s[j]]=j;
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};