/**
 * @param {string} s
 * @return {string}
 */
var removeOuterParentheses = function(s) {
    let count = 0;
    let res = "";
    for(let str of s)
    {
        str === ')' && count--;
        if(count !== 0)
            res+=str;
        str === '(' && count++;
        
    }
    return res;
};