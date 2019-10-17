/*
Link to the problem:
https://www.codechef.com/SEPT19B/problems/FIBEASY/
Link to my profile:
https://www.codechef.com/users/swati_2806
*/

#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
ll power(ll int a,ll n){
    if(n==0)return 1;
    if(n%2==0)return power(((a%60)*(a%60))%60,n/2);
    else return ((a%60)*power(((a%60)*(a%60))%60,(n-1)/2))%60;
}
vector<int>v;
void fib(int n)
{
v.resize(n);
v[0]=0;
v[1]=1;
for(int i=2;i<n;i++){
v[i]=(v[i-1]+v[i-2])%10;
}
}
int main(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
fib(60);
int t;
cin>>t;
while(t--)
{
ll int n;
cin>>n;
ll int x=log2l(n);
cout<<v[power(2,x)-1]<<endl;
}
}
