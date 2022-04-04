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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* ptr=head;
        int pos=0;
        while(ptr!=NULL)
        {
            ptr=ptr->next;
            pos++;
        }
        pos-=k-1;
        int cnt=1;
        ptr=head;
        ListNode* add1=NULL;
        ListNode* add2=NULL;
        while(ptr!=NULL)
        {
            if(cnt==k)
                add1=ptr;
            if(cnt==pos)
                add2=ptr;
            ptr=ptr->next;
            cnt++;
        }
        swap(add1->val,add2->val);
        return head;
    }
};