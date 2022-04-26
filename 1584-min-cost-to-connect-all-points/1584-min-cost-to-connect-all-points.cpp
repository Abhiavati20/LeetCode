class Solution {
public:
    int parents[1001];
     
   int findParents( int a){
        
       if(parents[a]<0)
           return a;
       
           return parents[a] = findParents(parents[a]);
   }
   
   void makeParents(int a, int b){
       parents[a] =b;
   }
         
   int minCostConnectPoints(vector<vector<int>>& points) {
             int n = points.size();
          for(int i=0; i<n; i++) parents[i]= -1;
         
       vector<pair<int , pair<int , int>>>adj;
        
       for(int i=0; i<n; i++){
           for(int j=i+1; j<n; j++){
               
               int weight = abs(points[i][0] - points[j][0]) +
                             abs(points[i][1] - points[j][1]);
               
                adj.push_back({weight, {i,j}});
           }
       }
       
       sort(adj.begin(), adj.end());
        
       int sum =0;
       
       for(int i=0; i<adj.size(); i++){
           
            int a = findParents(adj[i].second.first);
            int b = findParents(adj[i].second.second);
            
           if(a!=b){
               sum += adj[i].first;
                
               makeParents(a,b);
           }
       }
       
       return sum;
   }
};