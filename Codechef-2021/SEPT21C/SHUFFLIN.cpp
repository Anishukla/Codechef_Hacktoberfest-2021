//https://www.codechef.com/SEPT21B/problems/SHUFFLIN
//https://www.codechef.com/viewsolution/51881502

#include <bits/stdc++.h>

using namespace std;

#define FOR(i,k,n) for ( int i=k; i<n; i++ )

void fnc()
{
    int n;
    cin>>n;
    int odd=0,even=0;
    FOR(i,0,n)
    {
        int x;
        cin>>x;
        odd+= x&1;
        even+= !(x&1);
    }
    cout<<( min((n+1)/2,even) + min(n/2,odd) );

    // Fit maximum even numbers in odd places
    // Fit maximum odd numbers in even places

    // An array of size n has (n+1)/2 odd indices (1-based index)
    // (n+1)/2 == int(ceil(n/2))
    // rest n/2 indices are even

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
