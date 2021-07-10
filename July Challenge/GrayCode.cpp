class Solution {
public:
    vector<int> grayCode(int n) {
        vector<string> ans;
        vector<int> result;
        if(n==0)return result;
        ans.push_back("0");
        ans.push_back("1");
        while(n!=1){
            int len=ans.size();
            for(int i=len-1;i>=0;i--){
                ans.push_back("1"+ans[i]);
            }
            for(int i=0;i<len;i++){
                ans[i]="0"+ans[i];
            }
            n--;
        }
        for(int i=0;i<ans.size();i++){
            result.push_back(stoi(ans[i],0,2));
        }
        return result;
    }
};