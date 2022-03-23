class Solution {
public:
    string getSmallestString(int n, int k) {
        string str(n,'a');
        k-=n;
        int i=n-1;
        while(k){
            int t=min(25,k);
            str[i--]+=t;
            k-=t;
        }
        return str;
    }
};