/*
Link to the problem:
https://www.codechef.com/FEB19B/problems/HMAPPY2/
Link to my profile:
https://www.codechef.com/users/manasa28
*/

#include <stdio.h>

int gcd(long long int a, long long int b)
{
if (a==0)
        return b;
else
    return gcd(b%a,a);

}

int main(){

long long int a,b,test,min,j,gcd1;
long long int k,n,sum,lcm;

scanf("%lld",&test);

for (j=0;j<test;j++){
scanf("%lld%lld%lld%lld",&n, &a, &b, &k);
gcd1=gcd(a,b);
lcm = (a*b)/gcd1;
long long int m = n/lcm;
sum = (n/a) +(n/b) - 2*m;

if (sum>=k)
        printf("Win\n");
else
printf("Lose\n");
}
return 0;
}
