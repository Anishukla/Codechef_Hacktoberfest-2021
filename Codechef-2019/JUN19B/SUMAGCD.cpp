#include <bits/stdc++.h>
using namespace std;

long long maxi=-1, gcd, sz, a[100009], lf[100009], rt[100009], n, t, x;

int main()  {
    cin>>t;
    set<long long> s;
    while(t--)  {
        s.clear();
        maxi=-1;
        cin>>n;
        int j=1;

        for(int i=0;i<n;i++){
            cin>>x;
            sz=s.size();
            s.insert(x);
            if(sz!=s.size())    {
                a[j]=x;
                j++;
            }
        }
        j--;
        for(int k=0; k<=j; k++){
          cout<<a[k]<<"  ";
        }
        cout<<endl;

        lf[0]=-1;
        rt[j+1]=-1;

        lf[1]=a[1];
        rt[j]=a[j];
        for(int k=0; k<=j; k++){
          cout<<rt[k]<<"  ";
        }
        cout<<endl;

        for(int k=0; k<=j; k++){
          cout<<lf[k]<<"  ";
        }
        cout<<endl;

        for(int i=2;i<=j;i++)
            lf[i]=__gcd(lf[i-1],a[i]);
        for(int i=j-1;i>=1;i--)
            rt[i]=__gcd(rt[i+1],a[i]);
        for(int i=2;i<j;i++)    {
            gcd=__gcd(lf[i-1],rt[i+1]) + a[i];
            maxi=max(maxi,gcd);
        }
        for(int k=0; k<=j; k++){
          cout<<rt[k]<<"  ";
        }
        cout<<endl;

        for(int k=0; k<=j; k++){
          cout<<lf[k]<<"  ";
        }
        cout<<endl;

        if(lf[0]==-1 && rt[2]==-1)
            maxi=max(maxi,2*a[0]);
        else    {
            maxi=max(maxi,a[1]+rt[2]);
            maxi=max(maxi,a[j]+lf[j-1]);
        }
        if(j==1)
            maxi=max(maxi,2*a[1]);
        cout<<maxi<<endl;
    }
    return 0;
}