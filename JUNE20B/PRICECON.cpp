//Link to solution https://www.codechef.com/viewsolution/33645298

#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,i;
  cin>>t;
  for(i=0;i<t;i++){
    int n,k,j;
    cin>>n>>k;
    int arr[n];
    for(j=0;j<n;j++){
      cin>>arr[j];
    }
    int sum=0,sum1=0;
    for(j=0;j<n;j++){
      sum+=arr[j];
    }
    for(j=0;j<n;j++){
      if(arr[j]>k){
        arr[j]=k;
      }
    }
    for(j=0;j<n;j++){
      sum1+=arr[j];
    }
    cout<<(sum-sum1)<<"\n";
  }
  return 0;
}