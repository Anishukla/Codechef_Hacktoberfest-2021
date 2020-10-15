//https://www.codechef.com/problems/FLOW008
#include <stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        if(a<10)
        {printf("What an obedient servant you are!\n");}
        else
        {printf("-1\n");}
    }
   return 0; 
} 
