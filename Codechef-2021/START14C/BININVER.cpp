
/*
Link to the problem:
https://www.codechef.com/START14C/problems/BININVER
Link to my SOLUTION:
https://www.codechef.com/viewsolution/51820025
Link to my profile:
//https://www.codechef.com/users/xypher_ex
*/


#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

typedef vector<int> vi;

//****** max values ******
#define INF INT_MAX
#define NINF INT_MIN

//****** stl ******
#define all(x) x.begin(), x.end()
#define pb push_back

//***** loops *****
// #define for(n) for(int i=0; i<n; i++)

//***** clear input buffer *******
//  cin.ignore(numeric_limits<streamsize>::max(),'\n');

int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}


void solve() {

    ll n; cin>>n;
    ll a[n];
    
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    
    ll g = a[0];
    ll flag=0;
    
    for(ll i=1; i<n; i++)
    {
        
        g = gcd(g, a[i]);
        
        if(g&1)
        {
            flag = 1;
            break;
        }
    }
    
    // cout<<g<<"**"<<"\n";
    
    
    if(flag==1) cout<<"0"<<"\n";
    else 
    {
        ll count=0;
        while(g%2==0)
        {
            g = floor((double)(g/2));
            count++;
        }
        cout<<count<<"\n";
    }

}

void setIO(string name = "") {
	cin.tie(0)->sync_with_stdio(0);
	if (name.length()) {
		freopen((name + ".in").c_str(), "r", stdin);
		freopen((name + ".out").c_str(), "w", stdout);
	}
}


int main(){
    setIO("");
    int T = clock();


    int test; cin>>test;
    while(test--){

        solve();
        
    }
    
     cerr << "\nTIME: " << (long double)(clock() - T) / CLOCKS_PER_SEC << " sec\n";
    T = clock();
    
    return 0;
}