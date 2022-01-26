/**
 * @param {string} s
 * @param {number[]} indices
 * @return {string}
 */
var restoreString = function(s, indices) {
    let res = [];
    let i =0;
    for(i = 0; i < indices.length; i++)
    {
        res[indices[i]] = s[i];        
    }
    res = res.join('');
    return res;
};