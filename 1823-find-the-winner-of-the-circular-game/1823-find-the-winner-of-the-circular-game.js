/**
 * @param {number} n
 * @param {number} k
 * @return {number}
 */

var findTheWinner = function(n, k) {
    let a = [];
    for (let i = 0; i < n; i++) a.push(i + 1);
    let remove = 0;
    for (let i = 0; i < n - 1; i++) {
        remove = (remove + k - 1) % (n - i);
        a.splice(remove, 1);
    } 
    return a;
};