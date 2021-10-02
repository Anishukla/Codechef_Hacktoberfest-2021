
#include <iostream>
#include <vector>
using namespace std;

int main() {
  // your code goes here

  int t; 
  cin >> t;

  int n, k;  

  while(t--){
      cin >> n >> k;
      vector<int> a(n);

      for(int i=0; i<a.size(); i++)  
          cin >> a[i];

      vector<int> res(31);

      int count;
      for(int i=0;i<32;i++){
          count = 0;
          for(int j=0; j<a.size(); j++){
              if(a[j]%2 != 0){
                  count++;
              }
              a[j] = a[j]/2;
          }
          res[i] = count;
      }

      int ans=0;
      for(int i=0;i<32;i++){
          if(res[i]%k == 0)
              ans += res[i]/k;
          else
              ans += ((res[i]/k)+1);
      }
      cout << ans <<"\n";
  }
  return 0;
}
