class Solution {
public:
    string removeKdigits(string num, int k) {
        for(int i=0;i<num.length()-1 and k;i++)
            if(num[i]>=num[i+1])
                num.erase(i,1);
        while(k--)
            num.erase(num.length()-1);
        return num;
    }
};