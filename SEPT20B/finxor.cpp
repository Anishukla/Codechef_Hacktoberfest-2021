#include<bits/stdc++.h> 
using namespace std; 
typedef long long int ll;
#define m 1000000007
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define scan(a,n) for (ll i = 0; i < n; ++i) cin >> a[i]

ll finxor()
{
	vector<ll> v;
	ll n,ans=0,a;
	cin>>n;
	loop(i,1,21)
	{
		cout<<'1'<<" "<<(1ul<<i)<<endl;
		cin>>a;
		v.push_back(a);
	}
	reverse(v.begin(),v.end());
	ll count=v[0];
	count-=n*(1ul<<20);
	ll x=v.size();
	loop(i,1,x)
	{
		if(v[i]<count)
		{
			v[i]=((n+(count-v[i])/(1ul<<(x-i)))/2);
		}
		else
		{
			v[i]=((n-(v[i]-count)/(1ul<<(x-i)))/2);
		}
	}
	loop(i,1,x)
	{
		if(v[i]%2!=0)
			ans=ans+(1ul<<(x-i));
	}
	if(count%2!=0)
		ans++;
	cout<<'2'<<" "<<ans<<endl;
	ll res;
	cin>>res;
	return res;
}
int main() 
{  
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ll t=1;
	cin>>t;
	while(t--)
	{
		if(!finxor())
			break;
		cout<<endl;
	}
	return 0;
}