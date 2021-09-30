/*
Link to the problem:
https://www.codechef.com/JUNE19B/problems/KS2/
Link to my profile:
https://www.codechef.com/users/purbasa_kar
*/

#include<iostream>

using namespace std;
int main()
{
    unsigned long long int T,N,i,k,sum;
    cin>>T;
    while(T>0)
    {
        cin>>N;
        k=N;sum=0;
        while(k>0)
        {
            sum=k%10+sum;
            k=k/10;
        }
        if(sum%10==0)
        {
            N=N*10;
        }
        else
        {
            for(i=1;i<10;i++)
            {
                if(sum%10==i)
                {
                    N = N*10;
                    N=N+(10-(sum%10));
                    break;
                }
            }
        }
        cout<<N<<endl;
        T--;
    }
    return 0;
}
