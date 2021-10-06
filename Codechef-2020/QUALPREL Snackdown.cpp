#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,t=0,c=0;
        cin>>n>>k;
        long long int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        for(int i=0; i<n; i++)
        {
            if(a[i]>=a[k-1])
            {
                c=c+1;
            }
        }
        cout<<c<<"\n";
        
    }
	return 0;
}
