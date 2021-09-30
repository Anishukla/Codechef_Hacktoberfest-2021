/*
codechef problem link : https://www.codechef.com/problems/ARRFILL
codechef profile link : https://www.codechef.com/users/santosh_01
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  int T;
  cin >> T;
  while(T--) {
    long long int  n, m;
    cin>>n>>m;
    vector<pair<int,int>>vp;
    for (int i=0; i < m; i++)
    {
      long long  x, y;
      cin>>x>>y;
      vp.push_back({x,y});
    }
    sort(vp.begin(), vp.end(), greater<pair<int,int>>());
    
   long long int lcm=1;
    long long int  rem=n;
    long long res=0;
    
    for (int i=0; i<m && rem>0; i++){
        long long int  a= vp[i].first,b=vp[i].second;
        lcm = lcm*b/__gcd(lcm,b);
        res += (rem-n/lcm)*a;
        rem= n/lcm;
    }
    cout <<res<<endl;
  }
  return 0;
}
