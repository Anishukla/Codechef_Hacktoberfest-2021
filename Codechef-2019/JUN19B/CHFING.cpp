/*
Link to the problem:
https://www.codechef.com/JUNE19B/problems/CHFING/
Link to my profile:
https://www.codechef.com/users/purbasa_kar
*/
#include<iostream>
using namespace std;
int main()
{
    long long int T,K,N,m,v,a,ans;
    cin>>T;
    while(T>0)
    {
        cin>>N>>K;
        ans=0;
        m=(K-1)%(N-1);
        v=(((K-1)-m)/(N-1))+1;
        a=m+(K-1);
        if(v%2==1)
            a=a/2;
        else
            v=v/2;
        while(a>0)
        {
            if(a%2==1)
                ans=ans+v;
            v=v*2;
            v=v%1000000007;
            a=a/2;
            a=a%1000000007;
        }
        cout<<ans%1000000007<<endl;
        T--;
    }
    return 0;
}
