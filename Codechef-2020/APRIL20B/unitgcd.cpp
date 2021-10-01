/*
 profile link - https://www.codechef.com/users/harsh_gupta_33
 solution link - https://www.codechef.com/viewsolution/31447124
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
      int t;
      cin>>t;
      while(t--)
      {
      long int n,i,j,sum=0,a;
      cin>>n;
      if(n==1){
          cout<<1<<"\n";
      }
      else
        cout<<n/2<<"\n";
        if(n<=3)
        {
            for(int i=1;i<=n;i++)
            cout<<n<<" "<<i<<" ";
        }
        else
        {
            cout<<3<<" ";
            for(int i=1;i<=3;i++)
            cout<<i<<" ";
            cout<<"\n";
        for(int i=4;i<=n;i++)
        {
            if(i+1<=n)
            {
                cout<<2<<" "<<i<<" ";
                i++;
                cout<<i<<"\n";
            }
            else
            cout<<1<<" "<<i<<"\n";
        }
        }
        }
}