/**
 * @param {string} s
 * @param {string} t
 * @return {character}
 */
var findTheDifference = function(s, t) {
    let char = 0;
    let i = 0;
    for(i = 0; i < s.length; i++ )
    {
        char += t.charCodeAt(i);
        char -= s.charCodeAt(i);
    }
    char += t.charCodeAt(i);
    return String.fromCharCode(char);
};