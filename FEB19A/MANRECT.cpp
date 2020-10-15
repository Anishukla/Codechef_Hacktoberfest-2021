/*
@author: Ilias Khan
====
Link to the problem: 
    https://www.codechef.com/FEB19A/problems/MANRECT
Link to my profile:
    https://www.codechef.com/users/iliaskhan
*/


#include <iostream>
#include<cstdio>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--)
  {
      long lpx,lpy,upx,upy;
      long p1,p2,p3,p4,p5,p6,p7;

      cout<<"Q"<<" "<<0<<" "<<0<<endl;
      cin>>p1;
      cout<<flush;

      cout<<"Q"<<" "<<1000000000<<" "<<0<<endl;
      cin>>p2;
      cout<<flush;

      cout<<"Q"<<" "<<0<<" "<<1000000000<<endl;
      cin>>p3;
      cout<<flush;

      cout<<"Q"<<" "<<1000000000<<" "<<1000000000<<endl;
      cin>>p4;
      cout<<flush;
     
      cout<<"Q "<<(p1-p2+1000000000)/2<<" "<<0<<endl;
      cin>>lpy;
      cout<<flush;

      lpx=p1-lpy;
      upy=p1-p3+1000000000-lpy;
      upx=p1-p2+1000000000-lpx;
      cout<<"A"<<" "<<lpx<<" "<<lpy<<" "<<upx<<" "<<upy<<endl;
      cout<<flush;
      cin>>p6;
      
      if(p6!=1)
      {
          break;
      }
  }
  return 0;
}
