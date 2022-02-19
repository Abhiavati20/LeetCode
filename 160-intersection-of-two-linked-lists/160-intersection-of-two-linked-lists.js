/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} headA
 * @param {ListNode} headB
 * @return {ListNode}
 */
var getIntersectionNode = function(headA, headB) {
    let mp = new Map();
    let  p = headA, q = headB;
    while(p !== null){
        mp.set(p,1);
        p = p.next;
    }
    while(q !== null){
        if(mp.get(q) > 0)
            return q;
        q = q.next;
    }
    return q;
};