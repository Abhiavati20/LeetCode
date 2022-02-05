/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode[]} lists
 * @return {ListNode}
 */
let merge = function(l1, l2){
     if (l2 && l1) {
        if (l1.val < l2.val) {
          l1.next = merge(l1.next, l2);
          return l1;
        }
        l2.next = merge(l2.next, l1);
        return l2;
    }
    return l1 || l2;
}
var mergeKLists = function(lists) {
    let  p = null;
    for(list of lists)
    {
        p = merge(p,list);
    }
    return p;
};