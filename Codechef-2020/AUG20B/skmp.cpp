/*
 profile link - https://www.codechef.com/users/harsh_gupta_33
 problem link - https://www.codechef.com/AUG20B/problems/SKMP
 solution link - https://www.codechef.com/viewsolution/36307112
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
		string s, p, temp;
		cin >> s >> p;
		temp = p;
		int size = s.size(), check[size] = {0};
		int k = temp.size() - 1;
		sort(temp.begin(), temp.end());
		sort(s.begin(), s.end());
		if (p.size() > 1)
		{
			int flag = 0;
			for (int i = 1; i < p.size(); i++)
			{
				if (p[i] < p[0])
				{
					flag = 1;
					break;
				}
				else if (p[i] > p[0])
					break;
			}
			if (flag)
			{
				k = 0;
				for (int i = 0; i < size ; i++)
				{
					if (k < temp.size()  && s[i] == temp[k])
					{
						check[i] = 1;
						k++;
					}
				}
			}
			else
			{
				k = temp.size() - 1;
				for (int i = size - 1; i >= 0; i--)
				{
					if (k >= 0 && s[i] == temp[k])
					{
						check[i] = 1;
						k--;
					}
				}
			}
			// cout << s << endl;
			// for (int i = 0; i < size; i++)
			// 	cout << check[i];
			// cout << endl;
			for (int i = 0; i < size; i++)
			{
				if (check[i] == 0)
					cout << s[i];
				else
				{
					if (s[i] == p[0] && check[i] == 1)
					{
						k = i;
						cout << p;
						break;
					}

				}
			}
			for (int i = k + 1; i < size; i++)
			{
				if (check[i] == 0)
					cout << s[i];
			}
		}
		else
			cout << s;
		cout << endl;
	}

}