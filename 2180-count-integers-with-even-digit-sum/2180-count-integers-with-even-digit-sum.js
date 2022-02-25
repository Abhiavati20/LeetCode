/**
 * @param {number} num
 * @return {number}
 */
var countEven = function(num) {
    let no = 0;
    for(let i = 1; i <= num; i++) {
        if(digitsSum(i) % 2 === 0) no++; 
    }
    return no;
};

function digitsSum(num) {
    let sum = 0;

    while (num) {
        sum += num % 10;
        num = Math.floor(num / 10);
    }
    return sum;
}