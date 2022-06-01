class Solution {
public:
    void nextPermutation(vector<int>& n) {
    
        int brk=-1;
        for(int i=n.size()-2;i>=0;i--){
            if(n[i]<n[i+1]){
                brk=i;
                break;
            }
        }
        if(brk==-1){
            sort(n.begin(),n.end());
            return;
        }
        for(int i=n.size()-1;i>brk;i--){
            if(n[i]>n[brk]){
                swap(n[i],n[brk]);
                break;
            }
        }   
        sort(n.begin()+brk+1,n.end());
        return;
    }
};