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
var reverseList = function(head,prev = null) {
    if(head === null)
        return head;
    let  p = reverseList(head.next,head);
    if(p === null)
        p = head;
    head.next = prev;
    return p;
};