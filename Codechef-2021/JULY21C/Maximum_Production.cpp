#include<bits/stdc++.h>
using namespace std ;
#define lln long long int 

int max(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int d,x,y,z;
        cin>>d>>x>>y>>z;
        int ans=max(x*7,(y*d)+(7-d)*z);
        cout<<ans<<endl;
    }
    return 0;
}