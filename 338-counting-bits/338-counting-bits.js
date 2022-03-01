/**
 * @param {number} n
 * @return {number[]}
 */
var countBits = function(n) {
    let count = 0;
    let arr = [];
    for(let i = 0; i <= n; i++){
        let j = i;
        count = 0;
        while(j){
            if(j & 1) count++;
            j >>= 1;
        }
        arr.push(count);
    }
    return arr;
};