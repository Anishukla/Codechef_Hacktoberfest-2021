//https://www.codechef.com/JUNE20B/status/PRICECON,kumarankit01
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int sum=0;
	    for(int i=0;i<n;i++){
	        int x;
	        cin>>x;
	        if(x>k){
	            sum+=(x-k);
	        }
	    }
	    cout<<sum<<"\n";
	}
	return 0;
}
