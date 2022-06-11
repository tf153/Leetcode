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
    int size(ListNode *head){
        int ans=0;
        while(head){
            ans++;
            head=head->next;
        }
        return ans;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=size(head);
        len-=n;
        if(len==0){
            return head->next;
        }
        ListNode *temp=head;
        while(--len){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};