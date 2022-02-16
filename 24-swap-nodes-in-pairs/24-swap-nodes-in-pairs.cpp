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
        /* NAIVE APPROACH */
        
//         ListNode * p = head,*q; // pointers for iteration
//         ListNode *dummy = new ListNode(0);  // dummy node which help to swap nodes and change the value of head
// //         looping till we get null || till we get last odd node
//         while(p!=NULL && p->next!=NULL)
//         {
            
//             q = p->next;    
//             if(dummy->next == NULL) head = p->next;
//             dummy -> next = p -> next;
            
//             p->next=q->next;
//             q->next=p;
//             dummy = p;
//             p=p->next;
            
//         }
//         return head;
        
        /* RECURSIVE */
        if(head==NULL || head->next ==NULL)
            return head;
    
            ListNode *curr = head, *nextNode=head->next;
            ListNode *nextele = swapPairs(curr->next->next);
            nextNode->next=curr;
            curr->next=nextele;
    
            return nextNode;
    }
};