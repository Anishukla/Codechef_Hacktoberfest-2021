//Link to solution https://www.codechef.com/viewsolution/33660350

#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,j;
  cin>>t;
  for(j=0;j<t;j++){
    int i,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
      cin>>arr[i];
    }
    int c5=0,c10=0,c15=0;
    int flag=0;

    for(i=0;i<n;i++){
      if(arr[i]==5){
        c5++;
      }
      else if(arr[i]==10){
        if(c5==0){
          flag=1;
          break;
        }
        else{
          c5--;
          c10++;
        }
      }
      else if(arr[i]==15){
        if(c10>0){
          c10--;
          c15++;
        }
        else if(c5>1){
          c5 = c5-2;
          c15++;
        }
        else{
          flag=1;
          break;
        }
      }
    }

    if(flag==1){
      cout<<"NO\n";
    }
    else{
      cout<<"YES\n";
    }
  }
  return 0;
}