#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int d,x,y,z;
        cin>>d>>x>>y>>z;
        cout<<max((7*x),(y*d+(7-d)*z))<<endl;
    }
}