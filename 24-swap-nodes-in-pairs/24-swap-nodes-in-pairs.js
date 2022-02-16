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
var swapPairs = function(head) {
    if(!head || !head.next)
        return head;
    let curr = head,nextNode = head.next;
    let next_pair = swapPairs(curr.next.next);
    nextNode.next=curr;
    curr.next=next_pair;
    return nextNode;
};