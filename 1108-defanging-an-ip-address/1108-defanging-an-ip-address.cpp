class Solution {
public:
    string defangIPaddr(string address) {
        string tempAdd = "";
        for(int i = 0; i < address.size(); i++)
        {
            if(address[i] == '.')
            {
                tempAdd+="[.]";
            }
            else{
                tempAdd+=address[i];
            }
        }
        return tempAdd;
    }
};