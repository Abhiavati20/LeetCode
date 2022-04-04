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
    int findLength(ListNode* head) {
        int len = 0;
        while(head) {
            head = head->next;
            len++;
        }
        return len;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        int len = findLength(head);
        
        ListNode *begPtr = head;
        for(int i = 0; i < k - 1; i++) begPtr = begPtr->next;
        
        ListNode *endPtr = head;
        for(int i = 0; i < len - k; i++) endPtr = endPtr->next;
        
        swap(begPtr->val, endPtr->val);
        
        return head;
    }
};