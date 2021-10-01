#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007

ll powerLL(ll x, ll n)
{
    ll result = 1;
    while(n!=0){
        if(n%2==0){
            x = ((x%mod)*(x%mod))%mod;
            n = floor(n/2);
        }
        else{
            result = ((result%mod)*(x%mod))%mod;
            n=n-1;
        }
    }
    return result;
}
 


int main(){

    ll a[100001]={0};
    ll p;
    ll pre[100001]={0};
    for(ll i =1;i<=100000;i++){
        if(i<10)
            a[i]=i;
        else if(i>=10){
            p=i;
            ll k = i/10;
            while(k!=0){
                p = p*10+k%10;
                k=k/10;
            }
            a[i]=p;
            
        }
        pre[i]=a[i]+pre[i-1];
    }
    
    ll n;
    cin>>n;
    
    while(n--){
        ll l,r;
        cin>>l>>r;
        ll temp = pre[r]-pre[l];
        cout << powerLL(a[l],temp) << endl;
       
    }
}