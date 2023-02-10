//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    //Your code here
    // Approach 1 -> brute force
    // int len = str.length();
    // string strCpy = "";
    // for(int i = len - 1; i >= 0; i--) {
    //     strCpy += str[i];
    // }
    // str = strCpy;
    // return str;
    
    // Approach 2 -> 2 pointers
    int i = 0;
    int j = str.length() - 1;
    while(i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return str;
}

