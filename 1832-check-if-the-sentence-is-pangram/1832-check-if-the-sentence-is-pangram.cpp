class Solution {
public:
    bool checkIfPangram(string sen) {
        map<char,int> umap;
        for(int i='a';i<='z';i++){
            umap[i]++;
        }
        for(int i=0;i<sen.length();i++){
            umap[sen[i]]--;
        }
        
        for(auto x:umap){
            if(x.second >0)return false;
        }
        return true;
    }
};