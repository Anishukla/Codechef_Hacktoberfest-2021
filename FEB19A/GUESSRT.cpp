/*
@author: Ilias Khan
====
Link to the problem: 
    https://www.codechef.com/FEB19A/problems/GUESSRT
Link to my profile:
    https://www.codechef.com/users/iliaskhan
*/


#include <iostream>
#include<cstdio>
using namespace std;
long upp(long l, long r, long n) 
{ 
    if (r == 0) 
        return 1; 
    long h = upp(l,r/2,n)%n; 
    h= (h*h)%n; 
    return (r%2 == 0)? h : (l * h) % n; 
} 
long Multiinv(long x, long n) 
{ 
    return upp(x, n-2, n); 
} 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    long n,k,m;
	    cin>>n>>k>>m;
	    long remn=n;
	    n=n%k==0?k:n%k;
	    if(n==1){
	        cout<<1<<endl;
	        continue;
	    }
	    long currp=0;
	    long nextp=1;
	    long p1=Multiinv(n,1000000007);
	    long p2=((n-1)*Multiinv(n,1000000007))%1000000007;
	    long p3=Multiinv(n+k,1000000007);
	    long q100=1,q100sum=0;
	    for(int i=0;i<100;i++)
	    {
	        q100sum=(q100sum+q100)%1000000007;
	        q100=(q100*p2)%1000000007;
	    }
	    int f=m%2;
	    m=m/2;
	    long finalsum=0;
	    long count100=1;
	    while(m>=100)
	    {
	        finalsum=(finalsum+q100sum*count100)%1000000007;
	        count100=(count100*q100)%1000000007;
	        m=m-100;
	    }
	    long p4=1;
	    while(m--)
	    {
	        finalsum=(finalsum+count100*p4)%1000000007;p4=(p4*p2)%1000000007;
	    }
	    if(f)
	    {
	        finalsum=(p1*((finalsum+count100*p4)%1000000007))%1000000007;
	    }
	    else
	    {
	        finalsum=(p1*finalsum)%1000000007;
	        finalsum=(finalsum+((count100*p4)%1000000007)*p3)%1000000007;
	    }
	   cout<<finalsum<<endl;
	}
	return 0;
}
