// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int arr[], int n)
    {
       // Your code here
    
        stack<pair<int,int>> st;
        vector<int> res;
        for(int i = 0; i < n; i++)
        {
            int second = 1;
            while(!st.empty() && st.top().first <= arr[i])
            {
                second+=st.top().second; 
                st.pop();
            }
            res.push_back(second); 
            
            st.push({arr[i],second});
        }
        return res;
    }
};



// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends