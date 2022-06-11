/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    int length(ListNode *l){
        int ans=0;
        while(l){
            ans++;
            l=l->next;
        }
        return ans;
    }
public:
    ListNode *getIntersectionNode(ListNode *h1, ListNode *h2) {
        int l1=length(h1),l2=length(h2);
        int extra=abs(l1-l2);
        if(l1>l2)
            while(extra--)
                h1=h1->next;
        else
            while(extra--)
                h2=h2->next;
        while(h1!=h2){
            h1=h1->next;
            h2=h2->next;
        }
        return h1;
    }
};