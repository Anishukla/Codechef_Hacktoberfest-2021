/*
Link to the problem:
https://www.codechef.com/OCT19B/problems/S10E
Link to my profile:
https://www.codechef.com/users/purbasa_kar
*/
#include<iostream>
using namespace std;
int main()
{
    unsigned long long int T,N,K,i,c,s,k,j,small;
    cin>>T;
    while(T>0)
    {
        cin>>N;
        c=1;
        unsigned long long int P[N];
        for(i=0;i<N;i++)
            cin>>P[i];
        for(i=1;i<N;i++)
        {
            if(i<5)
                k=i;
            else
                k=5;
            small=P[i];
            //cout<<i-k<<" "<<k<<"  "<<i<<"  "<<small<<endl;
            for(j=i-k;j<i;j++)
            {
                //cout<<P[j]<<" ";
                if(small>=P[j])
                {
                   break;
                }
            }
            //cout<<endl;
            if(i==j)
               {
                   //cout<<"+"<<endl;
                   c++;
               }
        }
        cout<<c<<endl;
        T--;
    }
    return 0;
}
