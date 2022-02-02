#include <iostream>
using namespace std;

int A,B,C;
int solve(int N)
{
    if(N < 0)
        return 0;
    if(N==1)
        return A;
    if(N==2)
        return B;
    if(N==3)
        return C;
    return solve(N-1) + solve(N-2) + solve(N-3);
}
int main() {
	//code
	int testCases;
	cin>>testCases;
	while(testCases--)
	{
	    int N;
	    cin >> A>>B>>C>>N;
	    int ans = solve(N);
	    cout<<ans<<endl;
	}
	return 0;
}