class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string temp = "";
    int count = 0;
    unordered_map<string, int> m;
    vector<string> morse = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
    for (int i = 0; i < words.size(); i++)
    {
        for (auto a : words[i])
        {
            int val = a - 97;
            temp += morse[val];
        }
        if (m.find(temp) == m.end())
        {
            m[temp] = 1;
            count++;
        }

        temp.clear();
    }

    return count;
    }
};