/**
 * @param {string} command
 * @return {string}
 */
var interpret = function(command) {
    let res = ""
    for(let i = 0; i < command.length; i++)
    {
        if(command[i] === "(" && command[i+1] === ")")
        {
            res+="o";
        }
        else if(command[i] === "(" || command[i] === ")")
        {
            continue;
        }
        else{
            res+=command[i]
        }
    }
    return res;
};