/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} list1
 * @param {ListNode} list2
 * @return {ListNode}
 */
var mergeTwoLists = function(list1, list2) {
    let p = list1, q = list2, newList = new ListNode(-1),temp =newList;
    while(p!==null && q!==null)
    {
        if(p.val === q.val){
            temp.next=new ListNode(p.val);
            temp = temp.next;
            temp.next=new ListNode(q.val);
            temp = temp.next;
            p=p.next;
            q=q.next;
        }        
        else if(p.val > q.val){
            temp.next = new ListNode(q.val);
            temp = temp.next;
            q = q.next;
        }
        else{
            temp.next=new ListNode(p.val);
            temp = temp.next;
            p=p.next;
        }
    }
    while(p!==null){
        temp.next=new ListNode(p.val);
            temp = temp.next;
            p=p.next; 
    }
    while(q!==null){
        temp.next=new ListNode(q.val);
            temp = temp.next;
            q=q.next;
    }
    return newList.next;
};