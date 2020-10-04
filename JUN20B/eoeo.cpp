//https://www.codechef.com/JUNE20B/status/EOEO,kumarankit01
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int ts;
	    cin>>ts;
	    long long int c=0;
	    if(ts%2==1){
	        c=ts/2;
	    }
	    else{
	        long long int temp=ts;
	        long long int p2=0;
	        while(temp%2==0){
	            p2++;
	            temp=temp/2;
	        }
	        long long int n=pow(2,p2+1);
	        c=ts/n;
	    }
	    cout<<c<<"\n";
	}
	return 0;
}
