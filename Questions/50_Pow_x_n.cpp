class Solution {
public:
    double myPow(double x, int n) {
        bool neg=(n<0)?true:false;
        long N=n;
        if(neg)
            N=-N;
        double ans=1.0;
        while(N>0){
            if(N&1){
                ans*=x;
                N--;
            }
            else{
                x*=x;
                N/=2;
            }
        }
        if(neg)
            return 1.0/ans;
        return ans;
    }
};