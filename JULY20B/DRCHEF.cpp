/*
Link to the Problem : https://www.codechef.com/JULY20B/problems/PTMSSNG/
My Solution : https://www.codechef.com/viewsolution/35251064
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
#define asc(A) sort(A.begin(),A.end())
void solve()
{
    ll n, x, i = 0, days = 0;
    cin >> n >> x;
    vector<ll> A(n);
    input(A);
    asc(A);
    while (A[i] < ceil(x/2.0) and i < n)
        i++;
    for (int j = i; j < n; j++)
    {
        while (x < A[j])
        {
            x *= 2;
            days++;
        }
        x = A[j];
        x *= 2;
        days++;
    }
    days += i;
    cout << days << '\n';
}
signed main()
{
    fasino int testcase;
    cin >> testcase;
    while (testcase--)
    {
        solve();
    }
    return 0;
}