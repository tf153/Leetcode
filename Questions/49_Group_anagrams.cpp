class Solution {
    string fun(string s){
        sort(s.begin(),s.end());
        return s;
    }
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> ans;
        for(string s: strs)
            mp[fun(s)].push_back(s);
        for(pair<string,vector<string>> p:mp)
            ans.push_back(p.second);
        return ans;
    }
};