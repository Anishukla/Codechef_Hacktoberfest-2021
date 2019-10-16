//Link to my AC solution on Codechef:
//    https://www.codechef.com/viewsolution/25898762
//
//Link to the problem:
//    https://www.codechef.com/AUG19B/problems/ZOMCAV


#include <bits/stdc++.h>
#define lli long long int
#define pii pair<int, int>
#define pb push_back
#define mp make_pair
#define eb emplace_back
#define pf push_front
#define MOD 1000000007
#define F first
#define S second
#define inf INT_MAX
#define gcd(x,y) __gcd(x,y)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define i_am_iron_man ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MAX 200010

using namespace std;

lli t[4*MAX];

void build(lli a[], lli v, lli tl, lli tr)
{
    if(tl == tr)
        t[v] = t[tl];
    else
    {
        lli tm = (tl+tr)/2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        t[v] = 0;
    }
}

void update(lli v, lli tl, lli tr, lli l, lli r, lli add)
{
    if(l > r)
        return;
    if(l==tl and r == tr)
        t[v] += add;
    else
    {
        lli tm = (tl+tr)/2;
        update(v*2, tl, tm, l, min(r, tm), add);
        update(v*2+1, tm+1, tr, max(l, tm+1), r, add);
    }
}

lli get(lli v, lli tl, lli tr, lli pos)
{
    if(tl == tr)
        return t[v];
    lli tm = (tl+tr)/2;
    if(pos <= tm)
        return t[v] + get(v*2, tl, tm, pos);
    else
        return t[v] + get(v*2 + 1, tm+1, tr, pos);
}

bool areEqual(lli arr1[], lli arr2[], lli n)
{
    unordered_map<lli, lli> mp;
    for (lli i = 0; i < n; i++)
        mp[arr1[i]]++;

    for (lli i = 0; i < n; i++) {
        if (mp.find(arr2[i]) == mp.end())
            return false;
        if (mp[arr2[i]] == 0)
            return false;
        mp[arr2[i]]--;
    }
    return true;
}

int main()
{
    i_am_iron_man
    lli test;
    cin >> test;
    while(test--)
    {
        for(int i =0 ; i< 4*MAX ; i++){
            t[i]=0;
        }
        lli n;
        cin >> n;
        lli c[n], h[n], res[n], lower[n], upper[n];
        for(int i =0 ; i< n ; i++){
            res[i]=0;
            lower[i]=0;
            upper[i]=0;
        }
        for(lli i = 0; i < n; i++)
            cin >> c[i];
        for(lli i = 0; i < n; i++)
            cin >> h[i];
        for(lli i = 0; i < n; i++)
        {
            lower[i] = max((lli)0, (i-c[i]));
            upper[i] = min((lli)n-1, (i+c[i]));
        }
        build(c, 1, 0, n-1);
        for(lli i = 0; i < n; i++)
        {
            update(1, 0, n-1, lower[i], upper[i], 1);
        }
        for(lli i = 0; i < n; i++)
            res[i] = get(1, 0, n-1, i);
//        for(auto i : c)
//            cout << i << " ";
//        cout << endl;
//        for(auto i : h)
//            cout << i << " ";
//        cout << endl;
//        for(auto i : res)
//            cout << i << " ";
//        cout << endl;
        if(areEqual(res, h, n))
            cout << "YES" << endl;
        else
            cout  << "NO" << endl;
    }
    return 0;
}
