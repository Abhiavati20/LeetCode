class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;   // min heap
        pq.push({0,{0,0}});   //pushing the first node
        
        int n  = heights.size();             // row size
        int m  = heights[0].size();             // col size
        
        // storing minimum of maximum absolute distance for reaching some i,j in this array , we will try to return distanc[n-1][m-1];
        vector<vector<int>> distance(n,vector<int>(m,1e9));   // intially it is infinity to reach any node (The Cost)
        
        distance[0][0] = 0;   // you can reach the source node without paying any cost so it is zero
        
        vector<vector<int>> directions = {{-1,0},{1,0},{0,1},{0,-1}}; // for traversing all 4 sides of an cell
        
        while(!pq.empty()){
            auto key = pq.top();  pq.pop();
            
            // return if you reach the end !!!
            if(key.second.first==n-1 && key.second.second==m-1){
                return key.first;
            }
            // exploring all 4 childrens
            for(auto where:directions){
                int x = key.second.first+where[0];
                int y  = key.second.second + where[1];
                if(x<0 || x>n-1 || y<0 || y>m-1){
                    continue;
                }
                // the maximum diff available
        int  newdistanceAvailable = max(distance[key.second.first][key.second.second],abs(heights[x][y]-heights[key.second.first][key.second.second]));
                
                
                // update if this new max diff is less then the current maxDiff !! as we need to find the minimum !
                if(distance[x][y]> newdistanceAvailable){
                    distance[x][y] = newdistanceAvailable;
                    pq.push({newdistanceAvailable,{x,y}});
                }
            }
        }
       return 0;
        
    }
};