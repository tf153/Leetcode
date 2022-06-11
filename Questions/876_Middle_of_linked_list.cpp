/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    int len(ListNode *head){
        int ans=0;
        while(head){
            ans++;
            head=head->next;
        }
        return ans;
    }
public:
    ListNode* middleNode(ListNode* head) {
        int n=len(head);
        n=n/2;
        while(n){
            head=head->next;
            n--;
        }
        return head;
    }
};