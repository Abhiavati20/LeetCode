/**
 * @param {string} s
 * @param {number[]} indices
 * @return {string}
 */
var restoreString = function(s, indices) {
    return indices.reduce((arr, item, i) => {
        arr[item] = s[i];
        return arr;
     }, []).join('');
};