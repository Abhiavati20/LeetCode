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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *temp = new ListNode(-1),*p = temp,*q=l1,*r=l2;
        int carry = 0;
        
        while(q!=NULL && r!=NULL)
        {
            int x = q->val + r->val + carry;
            carry = 0;
            if(x >= 10) carry = 1;
            x = x % 10;
            p -> next = new ListNode(x);
            p = p -> next;
            q = q -> next;
            r = r -> next;
        }
        while(q!=NULL)
        {
            int x = q->val + carry;
            carry = 0;
            if(x >= 10) carry = 1;
            x = x % 10;
            p -> next = new ListNode(x);
            p = p -> next;
            q = q -> next;
        }
        while(r!=NULL)
        {
            int x = r->val + carry;
            carry = 0;
            if(x >= 10) carry = 1;
            x = x % 10;
            p -> next = new ListNode(x);
            p = p -> next;
            r = r -> next;
        }
        if(carry)
            p -> next = new ListNode(carry);
        return temp -> next;
    }
};