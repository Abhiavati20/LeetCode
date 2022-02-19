/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode *, int> A;
        ListNode *p = headA, *q = headB;
        while(p != NULL){
            A[p]++;
            p = p -> next;
        }
        while(q != NULL){
            if(A[q] > 0)
                return q;
            q = q -> next;
        }
        return q;
    }
};