#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,even=0,odd=0,c=0;  
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    for(int i=0;i<n;i++)
	    if(a[i]%2== 0) even++;
	    odd=n-even;
	    for(int i=0;i<n;i++)
	    {
	        if(i%2==0 && even>0) 
	        {
	            c++;
	            even--;
	        }
	        else if(i%2==1 && odd>0)
	        {
	            c++;
	            odd--;
	        }
	    } 
	    cout<<c<<"\n"; 
	}
	return 0;
}
