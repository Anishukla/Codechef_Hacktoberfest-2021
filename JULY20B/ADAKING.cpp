#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
char ch[9][9];
void solve()
{
    int safe_zones, fcks=0;
    cin>>safe_zones;
    memset(ch,'A',sizeof ch);
    for(int i=8;i>=1;i--){
        for(int j=8;j>=1;j--){
            if(fcks==safe_zones) break;
            if(i==j and i==8) ch[i][j] = 'O';
            else ch[i][j] = '.';
            fcks++;
        }
    }
    for(int i=8;i>=1;i--){
        for(int j=8;j>=1;j--){
            if(ch[i][j]=='O' and ch[i-1][j]=='A') ch[i-1][j] = 'X';
            if(ch[i][j]=='O' and ch[i-1][j-1]=='A') ch[i-1][j-1] = 'X';
            if(ch[i][j]=='O' and ch[i][j-1]=='A') ch[i][j-1] = 'X';
            if(ch[i][j]=='.' and ch[i-1][j]=='A') ch[i-1][j] = 'X';
            if(ch[i][j]=='.' and ch[i-1][j-1]=='A') ch[i-1][j-1] = 'X';
            if(ch[i][j]=='.' and ch[i][j-1]=='A') ch[i][j-1] = 'X';
            
        }
    }
    for(int i=1;i<=8;i++)
    {
        for(int j=1;j<=8;j++) 
            if(ch[i][j]=='A')
                cout<<'.';
            else cout<<ch[i][j];
        cout<<'\n';
    }
    cout<<'\n';
}
signed main()
{
    fasino
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}