/*
 profile link - https://www.codechef.com/users/harsh_gupta_33
 solution link - https://www.codechef.com/viewsolution/31679673
 */
#include<bits/stdc++.h>
using namespace std;
    long long int lcnt[100001], rcnt[100001];
int main()
{
      ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
      int t;
      cin>>t;
      while(t--)
      {
          long long int n,i;
      long long int sum=0,ans;
      cin>>n;
      int odd=0;
      long long int b[n+1];
      long long int a[n+1];
        memset(lcnt,0,sizeof(lcnt));
          memset(rcnt,0,sizeof(rcnt));
      for(i=0;i<n;i++)
      {
      cin>>a[i];
      if(a[i]%2==0 && a[i]%4!=0)
        b[i]=1;
      else{
        b[i]=0;
      }
      }
      for(i=0;i<n;i++)
      {
          if(b[i]==0 && a[i]%2!=0)
            odd++;
          else if(b[i]==1){
            lcnt[i]=odd;
            odd=0;
          }
          else
            odd=0;
      }
      odd=0;
      for(i=n-1;i>=0;i--)
      {
          if(b[i]==0 && a[i]%2!=0)
            odd++;
          else if(b[i]==1){
            rcnt[i]=odd;
            odd=0;
          }
          else
            odd=0;
      }
      for(i=0;i<n;i++){
        if(b[i]==1)
          sum+=(lcnt[i]+1)*(rcnt[i]+1);
      }
      long long int tot=(n*(n+1))/2;
      ans=tot-sum;
      cout<<ans<<"\n";
      }
}