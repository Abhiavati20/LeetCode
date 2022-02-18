/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var addTwoNumbers = function(l1, l2,prev = 0) {
    const sum = (l1?.val ?? 0) + (l2?.val ?? 0) + prev;
    const carry = sum > 9;
    const result = new ListNode(carry ? sum - 10 : sum);
    
    if (l1?.next || l2?.next || carry) {
        result.next = addTwoNumbers(l1?.next, l2?.next, +carry);
    }
    
    return result;
};