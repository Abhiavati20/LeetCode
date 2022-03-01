/**
 * @param {number} n
 * @return {number[]}
 */
var countBits = function(n) {
    // let arr = new Array(n+1).fill(0)
//     O(n^2)
    // for(let i = 0; i <= n; i++){
    //     let j = i;
    //     count = 0;
    //     while(j){
    //         if(j & 1) count++;
    //         j >>= 1;
    //     }
    //     arr.push(count);
    // }
    
//     O(n)
    let arr = new Array(n+1).fill(0)
    for(let i=1; i<=n; i++){
        arr[i] = arr[i >> 1] + (i&1)
    }
    return arr
};