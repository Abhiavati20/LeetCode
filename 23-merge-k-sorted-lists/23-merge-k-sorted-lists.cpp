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
    ListNode* merge(ListNode *l1,ListNode *l2)
    {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        if(l1->val < l2->val)
        {
            l1->next=merge(l1->next,l2);
            return l1;
        }
        else{
            l2->next = merge(l1,l2->next);
            return l2;
        }
        return l1;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *p=NULL;
        for(int i = 0; i < lists.size(); i++)
        {
            p = merge(p,lists[i]);
        }   
        return p;
    }
};