class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int len=s.length();
        vector<int> ans(len,INT_MAX-len-1);
        if(s[0]==c)ans[0]=0;
        for(int i=1;i<len;i++){
            if(s[i]==c){
                ans[i]=0;
            }
            else{
                ans[i]=ans[i-1]+1;
            }
        }
        for(int i=len-2;i>=0;i--){
            if(s[i]==c){
                continue;
            }
            ans[i]=min(ans[i],ans[i+1]+1);
        }
        return ans;
    }
};