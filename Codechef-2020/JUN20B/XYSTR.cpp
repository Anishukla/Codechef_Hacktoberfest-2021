//Link to solution https://www.codechef.com/viewsolution/33699574

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i;
    cin>>t;
    for(i=0;i<t;i++){
        std::string s;
        cin>>s;
        int n = s.size();
        int j,pairs=0;
        int b[n];
        for(j=0;j<n;j++){
            b[j]=0;
        }
        for(j=1;j<n;j++){
            if(((s[j]=='x'&&s[j-1]=='y')||(s[j]=='y'&&s[j-1]=='x'))&&b[j-1]==0){
                b[j]=1;
                pairs++;
            }
        }
        cout<<pairs<<"\n";
    }
    return 0;
}