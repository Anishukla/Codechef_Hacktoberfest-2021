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
