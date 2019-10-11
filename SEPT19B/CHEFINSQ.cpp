/*
Link to the problem:
https://www.codechef.com/SEPT19B/problems/CHEFINSQ
Link to my profile:
https://www.codechef.com/users/purbasa_kar
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void find_nCr(unsigned long long int n, unsigned long long int r)
{
    long long p = 1, k = 1;
    if (n - r < r)
        r = n - r;
    if (r != 0)
    {
        while (r)
        {
            p *= n;
            k *= r;
            long long m = __gcd(p, k);
            p /= m;
            k /= m;
            n--;
            r--;
        }
    }
    else
        p = 1;
    cout << p << endl;
}


int main()
{
    unsigned long long int T,N,K,i,n,c,combo,j;
    cin>>T;
    while(T>0)
    {
        cin>>N>>K;
        n=c=0;
        int A[100], B[100];
        for(i=0;i<N;i++)
            cin>>A[i];
        sort(A, A+N);
        for(j = 0; j<K; j++)
        {
            B[j] = A[j];
            //cout<<"B:"<<B[j];
        }
        //cout<<endl;
        unsigned long long int req = B[K-1];
        for(i=0;i<N;i++)
        {
            if(A[i] == req)
            {
                //cout<<A[i]<<" ";
                n++;
            }
        }
        //cout<<endl;
        for(j = 0; j<K; j++)
        {
            if(B[j] == req)
            {
                //cout<<B[i]<<" ";
                c++;
            }
        }
        //cout<<endl;
        //cout<<n<<"  "<<c<<endl;
        find_nCr(n,c);
        T--;
    }
    return 0;
}
