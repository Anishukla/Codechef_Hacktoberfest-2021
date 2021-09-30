#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int T,N,i,val1,val2,val3,val4,maximum,K,X;
    cin>>T;
    while(T>0)
    {
        cin>>N;
        long long int A[N], B[N], ans[N];
        val1=val2=val3=val4=maximum=0;
        for(i=0;i<N;i++)
        {
            cin>>A[i];
            val1 += A[i];
        }
        cin>>K>>X;
        for(i=0;i<N;i++)
        {
            B[i]=A[i]^X;
            cout<<B[i]<<endl;
            val2 += B[i];
            ans[i]=B[i]-A[i];
        }
        sort(ans,ans+N);
        reverse(ans,ans+N);
        if(N==K)
        {
            cout<<max(val1,val2);
        }
        else
        {
            if(K%2==0)
            {
               for(i=0;i<N;i++)
                {
                    val3+=ans[i];
                    if(i%2==1)
                    {
                        maximum=max(maximum,val3);
                    }
                }
            }
            else
            {
                for(i=0;i<N;i++)
                {
                    val4+=ans[i];
                    maximum=max(maximum,val4);
                }
            }
        }
        cout<<val1+maximum<<endl;
        T--;
    }
    return 0;
}
