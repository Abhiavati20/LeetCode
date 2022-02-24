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
    ListNode* getMid(ListNode* head){
        ListNode* slow=head,*fast=head->next;
		while(fast!=NULL && fast->next!=NULL){
			slow=slow->next;
			fast=fast->next->next;
		}
		return slow;
    }
    ListNode  * merge(ListNode *left,ListNode *right){
        if(left == NULL)return right;
        if(right == NULL)return left;
        
        ListNode *dummy = new ListNode(-1);
        ListNode* temp = dummy;

		while(left!=NULL && right!=NULL){
			if(left->val < right->val){
				temp->next = left;
				temp = left;
				left = left->next;
			}
			else{
				temp->next = right;
				temp = right;
				right = right->next;
			}
		}
		while(left!=NULL){
			temp->next = left;
			temp = left;
			left = left->next;
		}
		while(right!=NULL){
			temp->next = right;
			temp = right;
			right = right->next;
		}
		return dummy->next;
    }
    ListNode* sortList(ListNode* head) {
        // first we will check whether list contains only one element or not
        if(head==NULL || head->next==NULL)
			return head;

		//finding mid
		ListNode* mid = getMid(head);

		//breaking ll into 2 parts
		ListNode* left = head;
		ListNode* right = mid->next;
		mid->next=NULL;

		//sorting it
		left=sortList(left);
		right=sortList(right);

		//merging it
		ListNode* result = merge(left,right);

		return result;
    }
};