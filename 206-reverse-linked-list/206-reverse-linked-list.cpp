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
    ListNode* reverseList(ListNode* head,ListNode *prev = NULL) {
        if(head == NULL)
            return head;
        ListNode *p = reverseList(head->next,head);
        if(p == NULL)
            p=head;
        head->next = prev;
        return p;
    }
};