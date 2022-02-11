class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> a(26,0),b(26,0);
        if(s1.size() > s2.size()) return false;
        for(int i = 0; i < s1.size(); i++)
        {
            a[s1[i] - 'a']++;
            b[s2[i] - 'a']++;
        }
        for(int i = s1.size();i < s2.size(); i++)
        {
            if(a == b) return true;
            b[s2[i] - 'a']++;
            b[s2[i-s1.size()] - 'a']--;
        }
        if(a==b) return true;
        return false;
        // vector<int> arr(26,0),b(26,0);
        // int m=s1.length(),n=s2.length();
        // if(n<m)return false;
        // for(int i=0;i<m;i++){
        //     b[s1[i]-'a']++;
        //     arr[s2[i]-'a']++;
        // }
        // for(int i=m;i<n;i++){
        //     if(arr==b)return true;
        //     arr[s2[i]-'a']++;
        //     arr[s2[i-m]-'a']--;
        // }
        // if(arr==b)return true;
        // return false;
    }
};