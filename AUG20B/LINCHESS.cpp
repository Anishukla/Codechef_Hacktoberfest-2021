/* solution to
  https://www.codechef.com/AUG20B/problems/LINCHESS */

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    unsigned long int K;
	    cin>>N>>K;
	    unsigned long int arr[N],i;
	    long int j=-1;
	    for(i=0;i<N;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+N);
	    for(i=0;i<N;i++)
	    {
	        if(arr[i]<K && K%arr[i]==0)
	        {
	            j=arr[i];
	        }
	    }
	    cout<<j<<endl;
	}
	return 0;
}
