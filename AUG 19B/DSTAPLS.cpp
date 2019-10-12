 
/*
Link to the problem:
https://www.codechef.com/AUG19B/problems/DSTAPLS
Link to my profile:
https://www.codechef.com/users/rithika28
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int k,n,r;
		cin>>n>>k;

		r=n/k;
		if(r%k==0)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
}
