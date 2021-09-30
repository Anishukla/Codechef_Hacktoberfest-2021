#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define w(t) ll t;cin>>t;while(t--)
int main() {
	w(t)
    {
      int n;
      ll k;
      cin>>n>>k;
      vector<ll>array(n);
      for(ll i=0;i<n;i++)
      cin>>array[i];
      map<ll,ll> frequency1;
      map<ll,ll> frequency2;
      for(ll i=0;i<n;i++)
      {
        frequency1[array[i]]++;
      }
      for(ll i=0;i<n;i++)
      {
        if((array[i]^k)!=array[i])
        frequency2[(array[i]^k)]++;
        
      }
      ll maximum=0;
      ll minimum=1e18;
      for(ll i=0;i<n;i++)
      {
        if(frequency1[array[i]]+frequency2[array[i]]>=maximum)
        {
          if(frequency1[array[i]]+frequency2[array[i]]==maximum&&frequency2[array[i]]>minimum)
          continue;
          maximum=frequency1[array[i]]+frequency2[array[i]];
          minimum=frequency2[array[i]];
        }

      }
     cout<<maximum<<" "<<minimum<<endl;
    }
}
