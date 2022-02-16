class Solution {
public:
    unordered_map<char,string> mp;
    unordered_map<string, char> mp2;
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        vector<string> array;
        string line; 
        while(getline(ss,line,' '))
            array.push_back(line);
        if(pattern.length()!=array.size()) 
            return false;
        
        for(int i = 0; i<pattern.length();i++){
            if(mp.find(pattern[i]) != mp.end()){
                if(mp[pattern[i]]!= array[i]) {
                    return false;
                }
            }else{
                mp[pattern[i]] = array[i];     
            }
            
            if(mp2.find(array[i])!=mp2.end()){
                if(mp2[array[i]]!= pattern[i]) {
                    return false;
                }
            }else{
                mp2[array[i]] = pattern[i];
            }
        }
        return true;
    }
};