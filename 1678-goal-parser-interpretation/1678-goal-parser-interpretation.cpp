class Solution {
public:
    string interpret(string command) {
        string temp = "";
        for(int i = 0; i < command.size(); i++)
        {
            if(command[i] == '(' && command[i+1] == ')')
            {
                temp+="o";
            }
            else if(command[i] == '(' || command[i] == ')')
                continue;
            else
                temp+=command[i];
        }
        return temp;
    }
};