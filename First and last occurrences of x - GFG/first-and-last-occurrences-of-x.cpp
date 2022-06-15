// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> res;
    int start = 0, end = n - 1, FO = -1,LO = -1;
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(arr[mid] == x)
        {
            FO = mid;
            end = mid - 1;
        }
        else if(arr[mid] > x) end = mid - 1;
        else start = mid + 1;
    }
    start = 0;
    end = n - 1;
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(arr[mid] == x)
        {
            LO = mid;
            start = mid + 1;
        }
        else if(arr[mid] > x) end = mid - 1;
        else start = mid + 1;
    }
    res.push_back(FO);
    res.push_back(LO);
    return res;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends