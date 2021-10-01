// Problem: https://www.codechef.com/MARCH21B/problems/IRSTXOR
// Solution: https://www.codechef.com/viewsolution/43372116
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
using ll=long long;
using namespace std;
ll smallestPow2(ll c){
    ll num=1;
    while(num<=c){
        num<<=1;
    }
    return num;
}
int main(){
    IOS
    int t;
    cin>>t;
    while(t--){
        ll c,num,res;
        cin>>c;
        num=(smallestPow2(c)-1)>>1;
        res=num*(num^c);
        cout<<res<<endl;
    }
    return 0;
}