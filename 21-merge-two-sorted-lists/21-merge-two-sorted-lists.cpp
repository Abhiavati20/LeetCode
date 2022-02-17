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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *p=list1,*q = list2,*newList=new ListNode(-1),*temp=newList;
        while(p != NULL && q != NULL)
        {
            if(p->val == q->val)
            {
                temp->next = new ListNode(p->val);
                temp = temp->next;
                temp->next = new ListNode(q->val);
                temp = temp->next;
                p = p->next;
                q = q->next;
            }
            else if(p->val > q->val){
                temp->next = new ListNode(q->val);
                temp = temp->next;
                q = q -> next;
            }
            else {
                temp->next = new ListNode(p->val);
                temp = temp->next;
                p = p -> next;
            }
        }
        while(p!=NULL)
        {
            temp->next = new ListNode(p->val);
            temp = temp->next;
            p = p -> next;
        }
        while(q!=NULL)
        {
            temp->next = new ListNode(q->val);
            temp = temp->next;
            q = q -> next;
        }
        return newList -> next;
    }
};