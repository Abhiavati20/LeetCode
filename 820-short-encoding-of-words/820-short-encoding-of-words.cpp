struct Node{
    Node* v[27];
};
class Solution {
public:
    Node* trie1;
    int ans=0;
    void insert(string s){
        Node* trie=trie1;
        int flg=0;
        for(int i=0;i<s.length();i++){
            if(trie->v[s[i]-'a']==NULL) {
                flg=1;
                trie->v[s[i]-'a']=new Node();
            }
             trie=trie->v[s[i]-'a'];
        }
        if(flg) ans+=s.length()+1;
    }
    static bool comp(string&s1,string& s2){
        return s1.size()>s2.size();
    }
    int minimumLengthEncoding(vector<string>& words) {
        sort(words.begin(),words.end(),comp);
        trie1=new Node();
        for(string s:words){
            reverse(s.begin(),s.end());
            insert(s);
        }
        return ans;
    }
};