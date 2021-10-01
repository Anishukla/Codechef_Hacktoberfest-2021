// Problem : https://www.codechef.com/MARCH21B/problems/SPACEARR
// Solution : https://www.codechef.com/viewsolution/43418795
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
using ll=long long;
using namespace std;
int main(){
    IOS
    int t;
    cin>>t;
    while(t--){
        int n,flg=0;
        cin>>n;
        int arr[n+2];
        ll cnt=0;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        sort(arr+1,arr+n+1);
        for(int i=1;i<=n;i++){
            i-arr[i]>=0 ? cnt+=i-arr[i] : flg=1;
        }
        if(flg){
            cout<<"Second"<<endl;
            continue;
        }
        cout<<(cnt&1 ? "First" : "Second")<<endl;
    }
    return 0;
}