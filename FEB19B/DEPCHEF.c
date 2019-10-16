/*
Link to the problem:
https://www.codechef.com/FEB19B/problems/DEPCHEF
Link to my profile:
https://www.codechef.com/users/manasa28
*/


#include<stdio.h>
int main()
{int t,n,a[100],d[100];
 int i,j,k;
 scanf("%d",&t);
 for(i=0;i<t;i++)
 {int max=-1;
  scanf("%d",&n);
  for(j=0;j<n;j++)
  {scanf("%d",&a[j]);}
  for(j=0;j<n;j++)
  {scanf("%d",&d[j]);}
 
  if(d[0]>(a[1]+a[n-1]))
  {max=d[0];}

  if((d[n-1]>(a[0]+a[n-2])) && d[n-1]>max)
  {max=d[n-1];}

  for(j=1;j<n-1;j++)
  {if((d[j]>(a[j-1]+a[j+1])) && d[j]>max)
   {max=d[j];}
  }

  printf("%d\n",max);
 }
 
return 0;
}
