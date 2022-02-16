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
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode * p = head,*q;
        ListNode *dummy = new ListNode(0);
        
        while(p!=NULL && p->next!=NULL)
        {
            
            q = p->next;
            if(dummy->next == NULL) head = p->next;
            dummy -> next = p -> next;
            
            p->next=q->next;
            q->next=p;
            dummy = p;
            p=p->next;
            
        }
        return head;
        
    }
};