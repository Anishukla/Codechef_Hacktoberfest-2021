#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,m,i,j;
        cin>>n>>m;
        int a[n],b[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        cin>>b[i];
        vector<long long int> c;
        long long int cnt=0;
        for(i=0;i<n;i++)
        {
            cnt=0;

            for(j=0;j<n;j++)
            {
                if(a[i]==a[j])
                 {
                     cnt=cnt+b[j];


                 }
            }
            c.push_back(cnt);


        }
           
          
            cout<<*min_element(c.begin(),c.end())<<"\n";

    }
    return 0;
}
