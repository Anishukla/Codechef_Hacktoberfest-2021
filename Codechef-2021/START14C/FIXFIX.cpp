
/*
Link to the problem:
https://www.codechef.com/START14C/problems/FIXFIX
Link to my SOLUTION:
https://www.codechef.com/viewsolution/51825258
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


void solve() {

    ll n, k; cin>>n>>k;
    ll a[n+1];
    a[0]=0;
    
    for(ll i=1; i<=n; i++)
    {
        a[i] = i;
    }
    
    if(k==(n-1))
    {
        cout<<"-1"<<"\n";
        return;
    }
    else if(k==n)
    {
        for(int i=1; i<=n; i++)
        cout<<a[i]<<" ";
        
        cout<<"\n";
    }
    
    else
    {
        ll temp = a[k+1];
        for (ll i = k+1; i<n; i++)
            a[i] = a[i + 1];
 
            a[n] = temp;
            
            for(int i=1; i<=n; i++)
            cout<<a[i]<<" ";
        
            cout<<"\n";
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