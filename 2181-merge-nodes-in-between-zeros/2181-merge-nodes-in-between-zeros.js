/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var mergeNodes = function(head) {
    let sum = 0;
    let dummy = new ListNode(-1),temp = dummy;
    if(head.val===0)head = head.next;
    let  p = head;
    while(p!=null){
        if(p.val === 0){
            temp.next = new ListNode(sum);
            temp = temp.next;
            sum = 0;
        }
        else{
            sum+=p.val;
        }
        p = p.next;
    }
    
    return dummy.next;
};