/**
 * @param {string} version1
 * @param {string} version2
 * @return {number}
 */
var compareVersion = function(version1, version2) {
    let n1 = version1.length;
    let n2 = version2.length;
    let i = 0,j = 0;
    let num1 = 0,num2 = 0;
    while(i < n1 || j < n2){
        while(i < n1 &&version1[i]!='.'){
            num1 = num1 * 10 + Number(version1[i]) 
            i++;
        }
        while(j < n2 &&version2[j]!='.'){
            num2 = num2 * 10 + Number(version2[j]) 
            j++;
        }
        if(num1 > num2)return 1;
        if(num1 < num2) return -1;
        num1 = 0;
        num2 = 0;
        i++;
        j++;
    }
    return 0;
};