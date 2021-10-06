#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        int a[n],b[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        a[-1]=0;
        for(int i=0; i<n; i++)
        {
            if(abs (a[i]-a[i-1])>=b[i])
            {
                c++;
            }
            
         }
         cout<<c<<"\n";
     }
	return 0;
}
