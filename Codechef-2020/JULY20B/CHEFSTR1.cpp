//Link to solution https://www.codechef.com/viewsolution/34958672

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int i,n;
        cin>>n;
        long long int count=0, s[n];
        cin>>s[0];
        for(i=1;i<n;i++){
            cin>>s[i];
            count+=abs(s[i]-s[i-1]);
        }
        cout<<count-(n-1)<<"\n";
    }
    return 0;
}