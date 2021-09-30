//https://www.codechef.com/SEPT20B/status/TREE2,kumarankit01
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    set <long long int, greater<long long int> > s;
	    for(int i=0;i<n;i++){
	        long long int x;
	        cin>>x;
	        if(x!=0)
	        s.insert(x);
	    }
	    cout<<s.size()<<endl;
	}
	return 0;
}
