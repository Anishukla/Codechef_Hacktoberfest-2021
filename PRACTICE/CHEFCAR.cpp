#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void solve()
{
	ll n, v;
	cin >> n >> v;
	ll maxa = (((n - 1) * (n)) / 2);
	if (v == 1)
	{
		cout << maxa << " " << maxa << "\n";
	}
	else
	{
		ll mina = v;
		if (v >= n - 1)
		{
			mina = n - 1;
		}
		else
		{
			mina += ((((n - v) * (n - v + 1)) / 2) - 1);
		}
		cout << maxa << " " << mina << "\n";
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  
	ll t; 
  cin >> t;   
  while (t--)
	{
		solve();
	}
}
