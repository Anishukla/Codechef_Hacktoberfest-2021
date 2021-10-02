/*
 profile link - https://www.codechef.com/users/harsh_gupta_33
 problem link - https://www.codechef.com/AUG20B/problems/CHEFWED/
 solution link - https://www.codechef.com/viewsolution/36427057
 */
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define MAX 3001
#define ll long long
#define pb push_back
#define ff first
#define ss second
const int  mod  = 1000000007;

//void swap(int *x,int *y){int temp=*x;*x=*y;*y=temp; }
// ll int binpow(ll int a,ll int b){ll int ans=1; while(b>0){if(b&1){ans=ans*a;}a=a*a;b>>=1;}return ans;}
//ll power(ll a,ll b,ll m) { ll ans=1; a=a%m; while(b) { if(b&1) ans=(ans*a)%m; b/=2; a=(a*a)%m; } return ans; }
//ll modInverse(ll a, ll m) {return power(a, m-2, m);}
//bool is_prime(int n) { if (n < 2)return false; for (int i = 2; i * i <= n; i++) {if (n % i == 0) return false;} return true;}
//void sieve(int n){ bool prime[n+1]; memset(prime,true,sizeof(prime));prime[0]=false;prime[1]=false; for(int i=2;i*i<=n;i++){ if(prime[i]){for(int j=i*i;j<=n;j=j+i)prime[j]=false;}}for(int i=0;i<=n;i++){if(prime[i])cout<<i<<endl;}}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int n, k, ans = 0, ans1 = 0, ans2 = 100000001;
		cin >> n >> k;
		int f[n];
		for (int i = 0; i < n; i++)
			cin >> f[i];
		set<int> st;

		for (int i = 0; i < n; i++)
		{
			if (st.find(f[i]) != st.end())
			{
				st.clear();
				st.insert(f[i]);
				ans++;
			}
			else
			{
				st.insert(f[i]);
				if (st.size() == 1)
					ans++;

			}
		}
		st.clear();
		vector<int> front(n,0),back(n,0);
		map<int,int> mpf,mpb;
		for (int i = 0; i < n; i++){
		              mpf[f[i]]++;
			        int temp=0;
			        for(auto x : mpf)
			        {
			            if(x.ss>1)
			            temp+=x.ss;
			        }
			        front[i]=(temp);
			        
	    	}
	    	
	    	for(int i=n-1;i>=0;i--)
	    	{
	    	               mpb[f[i]]++;
			        int temp=0;
			        for(auto x : mpb)
			        {
			            if(x.ss>1)
			            temp+=x.ss;
			        }
			        back[i]=(temp);
	    	}
	   // 	for(auto x : front)
	   // 	cout<<x<<" ";
	   // 	cout<<endl;
	   // 	for(auto x : back)
	   // 	cout<<x << " ";
	   // 	cout<<endl;
	    	for(int i=0;i<n-1;i++)
	    	{
	    	    if(front[i]+back[i+1]<ans2)
	    	        ans2=front[i]+back[i+1];
	    	}
	    	
		map<int, int> mp;
		for (int i = 0; i < n; i++)
		{
			mp[f[i]]++;
		}
		for (auto x : mp)
		{
			if (x.ss > 1)
				ans1 += x.ss;
		}
		if (k == 1)
			cout << ans << endl;
		else
			cout << min(ans2+2*k,min(ans * k, k+ans1))  << endl;
		//	cout<<ans2+2*k;
	}

}