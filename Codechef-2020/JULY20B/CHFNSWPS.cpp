#include <bits/stdc++.h>
using namespace std;

void solve()
{
    unordered_map<long long, long long> um;
    vector<long long> a, b;
    long long e, ct = 0, n, mn = LLONG_MAX;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> e, um[e]++;
    for (int i = 0; i < n; i++)
        cin >> e, um[e]--;
    for (auto it : um)
    {
        mn = min(mn, it.first);
        if (it.second == 0)
            continue;
        else if (it.second % 2 != 0)
        {
            cout << "-1\n";
            return;
        }
        else if (it.second > 0)
            for (int i = 0; i < (it.second / 2); i++)
                a.emplace_back(it.first);
        else
            for (int i = 0; i < abs(it.second / 2); i++)
                b.emplace_back(it.first);
    }

    if (a.size() != b.size())
    {
        cout << "-1\n";
        return;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), [](long long &left, long long &right) { return left > right; });
    for (int i = 0; i < a.size(); i++)
        ct += min(min(a[i], b[i]), 2 * mn);
    cout << ct << endl;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}