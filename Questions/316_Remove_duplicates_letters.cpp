class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char,int> mp;
        vector<bool> visited(256,false);
        for(char c:s)
            mp[c]++;
        string ans="1";
        for(char c:s){
            mp[c]--;
            if(visited[c])
                continue;
            while(c<=ans.back() and mp[ans.back()]){
                visited[ans.back()]=false;
                ans.pop_back();
            }
            ans.push_back(c);
            visited[c]=true;
        }
        return ans.substr(1);
    }
};