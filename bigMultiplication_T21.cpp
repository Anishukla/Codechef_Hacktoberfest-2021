#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll tc;
    cin >> tc;
    while (tc--)
    {
        string m,n;
        cin >> m >> n;
        ll msum = 0;
        ll nsum = 0;
        for (ll i=0; i < m.size(); i++)
        {
            msum += m[i] - 48;
        }
        for (ll i=0; i < n.size(); i++)
        {
            nsum += n[i] - 48;
        }
        cout << (msum%3 * nsum%3)%3 << endl;
    }
    return 0;
}
