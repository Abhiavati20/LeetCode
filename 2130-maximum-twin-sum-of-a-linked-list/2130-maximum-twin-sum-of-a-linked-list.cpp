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
    int pairSum(ListNode* head) {
        ListNode *fast = head,*slow = head;
        stack<ListNode*> st;
        while(fast && fast->next)
        {
            st.push(slow);
            slow = slow->next;
            fast = fast->next->next;
        }
        int sum = INT_MIN;
        while(slow)
        {
            int currsum = slow->val + st.top()->val;
            sum  = sum >= currsum ? sum : currsum;
            slow = slow->next;
            st.pop();
        }
        return sum;
    }
};