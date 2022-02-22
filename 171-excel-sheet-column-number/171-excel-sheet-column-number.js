/**
 * @param {string} columnTitle
 * @return {number}
 */
var titleToNumber = function(columnTitle) {
    let sum = 0;
    for(let i = 0; i < columnTitle.length; i++){
        sum += sum*25 + (columnTitle[i].charCodeAt(0) - 'A'.charCodeAt(0) + 1)   
    }
    return sum;
};