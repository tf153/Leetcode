class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
        string prev=countAndSay(n-1);
        string ans;
        for(int i=0;i<prev.size();){
            int count=0;
            char c=prev[i];
            while(i<prev.size() and prev[i]==c){
                count++;
                i++;
            }
            ans+=to_string(count);
            ans.push_back(c);
        }
        return ans;
    }
};