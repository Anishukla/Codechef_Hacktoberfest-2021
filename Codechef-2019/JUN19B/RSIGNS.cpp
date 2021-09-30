//Link to the question:
//    https://www.codechef.com/JUNE19B/problems/RSIGNS
//Link to my AC solution:
//    https://www.codechef.com/viewsolution/24660179

#include <bits/stdc++.h>
#define lli long long int
#define pf push_front
#define pb push_back
#define mp make_pair
#define eb emplace_back
#define MOD 1000000007
#define F first
#define S second
#define inf INT_MAX
#define gcd(x,y) __gcd(x,y)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

lli expo(lli a, lli n, lli m)
{
    a = a % m;
    lli res = 1;
    while(n > 0)
    {
        if(n & 1)
            res = (res * a) % m;
        a = (a * a) % m;
        n = n >> 1;
    }
    return res ;
}

int main()
{
    IOS
    lli test;
    cin >> test;
    while(test--)
    {
        lli k;
        cin >> k;
        lli res = expo(2, (k-1), MOD);
        lli ans = (res * 10) % MOD;
        cout << ans << endl;
    }
    return 0;
}

