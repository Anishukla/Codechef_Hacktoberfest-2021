#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
#define endl "\n"
int ordi,coor;
void solve()
{
    int num;
    cin >> num;
    num = 4 * num - 1;
    map<int, int> xos, yos;
    while (num--)
    {
        cin >> ordi >> coor;
        xos[ordi]++;
        yos[coor]++;
    }
    for (auto i : xos)
        if (i.second % 2 != 0)
        {
            cout << i.first;
            break;
        }
    cout << " ";
    for (auto i : yos)
        if (i.second % 2 != 0)
        {
            cout << i.first;
            break;
        }
    cout << endl;
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