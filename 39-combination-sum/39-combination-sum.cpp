class Solution {
public:
    void solve(int index,int target,vector<int> &candidates,vector<vector<int>>&res,vector<int>&temp){
		if(index==candidates.size()){
			if(target==0){
				res.push_back(temp);
			}
			return;
		}
		if(candidates[index]<=target){
			temp.push_back(candidates[index]);
			solve(index,target-candidates[index],candidates,res,temp);
			temp.pop_back();
		}
		solve(index+1,target,candidates,res,temp);
	}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> temp;
        solve(0,target,candidates,res,temp);
        return res; 
    }
};