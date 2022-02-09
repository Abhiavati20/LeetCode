/**
 * @param {number} num
 * @return {number}
 */
var addDigits = function(num) {
    let sum = 0;
    if(num<10) return num;
    while(num > 0)
    {
        sum+=num%10;
        num=Math.floor(num/10);
    }
    // console.log(sum);
    return sum%9==0?9:sum%9;
};