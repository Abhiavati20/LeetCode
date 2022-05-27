// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        vector<long long> mxl,mxr;
        stack<long long> st;
        for(int i = 0; i < n; ++i)
        {
            if(st.empty())
            {
                mxl.push_back(arr[i]);
                st.push(arr[i]);
            }
            else if(st.top() < arr[i])
            {
                st.pop();
                st.push(arr[i]);
                mxl.push_back(arr[i]);
            }
            else
                mxl.push_back(st.top());
        }
        st.pop();
        for(int i = n - 1; i >= 0; --i)
        {
            if(st.empty())
            {
                mxr.push_back(arr[i]);
                st.push(arr[i]);
            }
            else if(st.top() < arr[i])
            {
                st.pop();
                st.push(arr[i]);
                mxr.push_back(arr[i]);
            }
            else
                mxr.push_back(st.top());
        }
        reverse(mxr.begin(),mxr.end());
        
        long long sum = 0;
        for(int i = 0; i < n; ++i)
        {
            sum += (min(mxr[i],mxl[i]) - arr[i]);
        }
        return sum;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends