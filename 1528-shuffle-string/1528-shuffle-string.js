/**
 * @param {string} s
 * @param {number[]} indices
 * @return {string}
 */
var restoreString = function(s, indices) {
    let ret = [];
    for (let i = 0; i < indices.length; ++i) {
        ret[indices[i]] = s.charAt(i);
    }
    return ret.join('');
};