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
    ListNode* mergeNodes(ListNode* head) {
        int sum = 0;
        if(head->val == 0)
            head=head->next;
        ListNode *p =head;
        ListNode *dummy = new ListNode(-1);
        ListNode *temp = dummy;
        while(p!=NULL){
            if(p->val == 0){
                temp->next = new ListNode(sum);
                temp =temp->next;
                p = p->next;
                sum=0;
            }
            else{
                sum+=p->val;
                p = p->next;
            }
        }
        return dummy->next;
    }
};