class Solution {
public:
    bool backspaceCompare(string s, string t) {
        for(int i=0;i<s.size();i++)
            if(s[i]=='#' and i>0){
                s.erase(i-1,2);
                i-=2;
            }
        while(s[0]=='#')
            s.erase(0,1);
        cout<<s<<endl;
        for(int i=0;i<t.size();i++)
            if(t[i]=='#' and i>0){
                t.erase(i-1,2);
                i-=2;
            }
        while(t[0]=='#')
            t.erase(0,1);
        cout<<t<<endl;
        return s==t;
    }
};