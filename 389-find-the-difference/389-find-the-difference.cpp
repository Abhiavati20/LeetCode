class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = s.length(); 
        vector<int> freq(26, 0); 
        
        for(int i = 0; i < n; i++)
        {
            freq[s[i] - 'a']--;
        }
        
        for(int i = 0; i < n + 1; i++)
        {
            freq[t[i] - 'a']++;
        }
        
        char ans = 'a'; 
        
        for(int i = 0; i < 26; i++)
        {
            if(freq[i] == 1)
            {
                ans = (char) i + 'a'; 
                break;
            }
        }
        
        return ans;  
    }
};