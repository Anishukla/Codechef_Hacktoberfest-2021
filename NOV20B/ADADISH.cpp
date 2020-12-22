/*
    Link to the problem: 
    https://www.codechef.com/NOV20B/problems/ADADISH
    Link to my profile:
    https://www.codechef.com/users/oj_17
*/


#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    int x=0,y=0;
	    sort(arr,arr+n,greater<int>());
	    x=arr[0];
	    for(int i=1;i<n;i++)
	    {
	        if(y<=x)
	        y+=arr[i];
	        else
	        x+=arr[i];
	    }
	    if(x==y)
	    cout<<x<<"\n";
	    else if(x>y)
	    cout <<x<<"\n";
	    else if(y>x)
	    cout<<y<<"\n";
	    
	}
	return 0;
}