//Link to my solution - https://www.codechef.com/viewsolution/34314850
#include <iostream>
using namespace std;

int main()
{
	long long int T, N, i, j, temp, val;
	cin>>T;
	while(T>0)
	{
	    cin>>N;
	    val=1;
	    long long int A[N][N]={};
	    for(i=0;val<=N*N;i++)
	    {
	        j=temp=i;
	        for(;j<N-i;j++,val++)
	            A[temp][j]=val;
	        temp++;j--;
	        for(;temp<N-i;temp++,val++)
	            A[temp][j]=val;
	        temp--;j--;
	        for(;j>=i;j--,val++)
	            A[temp][j]=val;
	        temp--;j++;
	        for(;temp>i;temp--,val++)
	            A[temp][j]=val;
	    }
	    for(i=0;i<N;i++)
	    {
	        for(j=0;j<N;j++)
	            cout<<A[i][j]<<" ";
	        cout<<endl;
	    }
	    T--;
	}
	return 0;
}
