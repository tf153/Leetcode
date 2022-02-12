class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> st(wordList.begin(),wordList.end());
        if(st.find(endWord)==st.end())
            return 0;
        queue<string> q;
        q.push(beginWord);
        st.erase(beginWord);
        int ans=0;
        while(!q.empty()){
            ans++;
            int len=q.size();
            while(len--){
                string temp=q.front();
                st.erase(temp);
                q.pop();
                char c;
                for(int i=0;i<temp.size();i++){
                    c=temp[i];
                    for(int j=0;j<26;j++){
                        if(c==j+'a')
                            continue;
                        temp[i]=j+'a';
                        if(temp==endWord)
                            return ans+1;
                        else if(st.find(temp)!=st.end()){
                            q.push(temp);
                            st.erase(temp);
                        }
                    }
                    temp[i]=c;
                }
            }
        }
        return 0;
    }
};