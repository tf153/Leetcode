class Solution {
    unordered_map<char,vector<char>> mp;
    void solve(string d,string s,vector<string> &ans){
        if(d.size()==0){
            ans.push_back(s);
            return;
        }
        for(char c:mp[d[0]]){
            s.push_back(c);
            solve(d.substr(1),s,ans);
            s.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)
            return {};
        int temp=0;
        char c='0';
        for(int i=2;i<=9;i++){
            for(int j=0;j<3;j++)
                mp[c+i].push_back('a'+temp++);
            if(i==7)
                mp[c+i].push_back('a'+ temp++);
        }       
        mp['9'].push_back('z');
        vector<string> ans;
        
        solve(digits,"",ans);
        return ans;
    }
};