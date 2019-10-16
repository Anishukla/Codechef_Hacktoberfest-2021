/*
Link to the problem:
https://www.codechef.com/MARCH19B/problems/CHNUM/
Link to my profile:
https://www.codechef.com/users/manasa28
*/

#include<iostream>
using namespace std;

int minimum(int a,int b,int c)
{int brr[3]={a,b,c};
 int m=brr[0];
 int i;
 for(i=0;i<3;i++)
 {if(brr[i]<m && brr[i]>0)
  {m=brr[i];}
 }
 return m;
}

int main()
{int t,n,j,i;
 long long int arr[100000];
 cin>>t;
 for(i=0;i<t;i++)
 {int c1=0,c2=0,c3=0;
  int max,min;
  cin>>n;
  for(j=0;j<n;j++)
  {cin>>arr[j];}
  for(j=0;j<n;j++)
  {if(arr[j]>0)
   {c1++;}
   else if(arr[j]<0)
   {c2++;}
   else if(arr[j]==0)
   {c3++;}
  }
  if(c1>c2)
  {max=c1+c3;}
  else if(c2>c1)
  {max=c2+c3;}
  else
  {max=c1;}

  min=minimum(c1,c2,c3);
  cout<<max<<" "<<min<<endl;
 }

 return 0;
}
