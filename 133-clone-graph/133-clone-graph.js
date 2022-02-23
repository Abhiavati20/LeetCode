/**
 * // Definition for a Node.
 * function Node(val, neighbors) {
 *    this.val = val === undefined ? 0 : val;
 *    this.neighbors = neighbors === undefined ? [] : neighbors;
 * };
 */

/**
 * @param {Node} node
 * @return {Node}
 */
var cloneGraph = function(node) {
    let res = {};
    
    const clone = node => {
        if (!node) return node;
        if(!res[node.val]) {
            res[node.val] = new Node(node.val);
            res[node.val].neighbors = node.neighbors.map((neighbor)=>clone(neighbor))
        } 
        return res[node.val];
    }
    
    return clone(node);
};