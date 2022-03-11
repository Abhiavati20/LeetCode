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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next)return head;
        ListNode *p = head,*q = head;
        int cnt = 0;
        while(p!=NULL)
        {
            cnt++;
            p = p -> next;
        }
        k = k % cnt;
        while(k--){
            p = head;
            while(p->next!=NULL){
                q = p;
                p = p->next;
            }
            q->next = NULL;
            p->next = head;
            head = p;
        }
        return head;
    }
};