class Solution {
public:
    int ladderLength(string begin, string end, vector<string>& words) {
        unordered_set <string> wordset;     //because it takes O(1) to find and erase
        bool present=false;            //to check whether end is present in words or not
        for(auto wo:words){
            if(end == wo)              //if found, make it true
                present=true;
            wordset.insert(wo);        //simultaneously adding words into wordset
        }
        if(!present)
            return 0;                  //if not present, return that no such sequence exists
        
        queue <string> q;              //to store the next word to be processed 
        q.push(begin);                 //starting with begin
        int depth=0;
        while(!q.empty()){             //while queue is not empty
            depth++;                   //to get how many words did we move
            int level=q.size();        //to know that for how many next words - we can go on loop
            
            while(level--){
                string word = q.front();
                q.pop();
                for(int i=0; i<word.length(); i++){
                    string temp = word;     
                    for(char t='a'; t<='z'; t++){
                        temp[i]=t;      //substituting each letter in word with another letter

                        if(temp == word)
                            continue;
                        
                        if(temp == end) //if end is found - return answer
                            return depth+1;

                        if(wordset.find(temp)!=wordset.end()){  //if modified word is present in wordset, put it queue to be processed
                            q.push(temp);
                            wordset.erase(temp);                //removing from wordset
                        }
                    }
                }
            }
        }
        return 0;
    }
};