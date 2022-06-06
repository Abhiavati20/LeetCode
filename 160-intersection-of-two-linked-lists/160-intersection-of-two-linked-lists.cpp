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
        map<ListNode *,int> mp;
        ListNode * A = headA,*B = headB;
        while(A)
        {
            mp[A]++;
            A = A->next;
        }
        while(B)
        {
            if(mp[B] > 0)
                return B;
            B = B->next;
        }
        return NULL;
    }
};