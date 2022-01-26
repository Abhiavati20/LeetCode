/**
 * @param {string} jewels
 * @param {string} stones
 * @return {number}
 */
const isJewel= (jewels,stone) =>{
    let flag = false;
    for(let i = 0; i < jewels.length; i++)
    {
        if(jewels[i] === stone)
            flag = true;
    }
        
    return flag;
}
var numJewelsInStones = function(jewels, stones) {
    let count = 0;
    for(let i = 0; i < stones.length; i++)
    {
        if(isJewel(jewels,stones[i]))
            count++;
    }
    return count;
};