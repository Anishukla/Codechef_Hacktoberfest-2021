//author : akashksinghal
//Problem Link : https://www.codechef.com/MAY20B/problems/CORUS
//Link to Solution : https://www.codechef.com/viewsolution/38655465
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll n, q; cin >> n >> q;
    string N; cin >> N;
    map<char, ll> counts;
    for (auto i : N)
        counts[i]++;
    for (ll i = 0; i < q; i++) {
        ll tm, wait = 0;
        cin >> tm;
        for (auto k : counts)
        {
            wait += ((k.second) - tm) > 0 ? ((k.second) - tm) : 0;
        }
        cout << wait << "\n";
    }
}
signed main()
{
    fasino
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}