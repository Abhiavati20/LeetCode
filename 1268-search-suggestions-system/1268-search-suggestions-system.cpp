class Solution {
    unordered_map<string,set<string >> hash;
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        vector<vector<string>> ans;
        int setSize=0;
        for(string p: products){
            for(int i=1;i<=size(p);i++){
                string pref = p.substr(0,i);
                hash[pref].insert(p);
            }
        }
        for(int i=1;i<=size(searchWord);i++){
            string wordPref = searchWord.substr(0,i);
            setSize = size(hash[wordPref]) > 3 ? 3 : size(hash[wordPref]);
			vector<string> vs;
			for(auto itr = hash[wordPref].begin();setSize;itr++){
				vs.push_back(*itr);
				setSize--;
			}
			ans.push_back(vs);
        }
        return ans;
    }
};