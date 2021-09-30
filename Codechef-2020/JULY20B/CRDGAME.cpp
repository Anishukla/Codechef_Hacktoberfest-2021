#include<iostream>
#define ll long long
using namespace std;
ll num(ll a)
{
    ll x=a;
    ll z=0;
    while(x!=0)
    {
        z = z + x % 10;
        x = x / 10;
    }
    return z;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        ll c=0,m=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            ll a,b;
            cin>>a>>b;
            a=num(a);
            b=num(b);
            if(a!=b)
            {
                if(a>b)
                    c++;
                else
                    m++;
            }
            else
            {
                c++;
                m++;
            }                    
        }
        if(c==m)
            cout<<2<<" "<<c<<endl;
        else
        {    
            if(c>m)
                cout<<0<<" "<<c<<endl;
            else 
                cout<<1<<" "<<m<<endl;
        }           
    }
}