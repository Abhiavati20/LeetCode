class Solution {
public:
    
    int solve(vector<int> &res,int index,int k)
    {
        if(res.size() == 1)
            return res[0];

        index = (index + (k-1)) % res.size();
        res.erase(res.begin()+index);
        return solve(res,index,k);
    }
    int findTheWinner(int n, int k) {
        vector<int> res;
        for(int i = 0; i < n; i++)
            res.push_back(i+1);
        
        return solve(res,0,k);
    }
};