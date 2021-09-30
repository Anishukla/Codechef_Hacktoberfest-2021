//https://www.codechef.com/SEPT20B/status/CHFNSWAP,kumarankit01
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    long long int sum = (n*(n+1))/2;
	    if(sum%2==1){
	        cout<<"0"<<endl;
	    }else{
	        long long int p = (sqrt(1+4*sum)-1)/2;
	        if((p*(p+1))/2 == sum/2){
	            long long int q = (p*(p-1))/2 + ((n-p)*(n-p-1))/2 + n - p;
	            cout<<q<<endl;
	        }else{
	            cout<<n-p<<endl;
	        }
	    }
	}
	return 0;
}
