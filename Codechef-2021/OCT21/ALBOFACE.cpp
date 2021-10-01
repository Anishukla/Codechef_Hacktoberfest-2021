//https://www.codechef.com/problems/ALBOFACE
//https://www.codechef.com/viewsolution/51713086

#include <bits/stdc++.h>

using namespace std;

#define FOR(i,k,n) for ( int i=k; i<n; i++ )
#define ll long long


mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

bool isPow(unsigned ll n){
    return (n && !(n & (n - 1)));
}

void fnc()
{
    unsigned ll n;
    cin>>n;
    
    if ( n==2 )
    {
        cout<<"Bob";
        return;
    }

    if ( isPow(n+1) )
        cout<<"Alice";
    else if ( isPow(n+2) )
        cout<<"Bob";
    else
        cout<<((n&1)?"Bob":"Alice");
}

int main(){
    int n;
    cin>>n;
    FOR(i,0,n)
    {
        fnc();
        cout<<"\n";
    }
}