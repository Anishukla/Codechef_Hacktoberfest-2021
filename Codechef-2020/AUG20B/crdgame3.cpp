//https://www.codechef.com/AUG20B/status/CRDGAME3,kumarankit01
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int cr,pr;
	    cin>>cr>>pr;
	    int chef, rick;
	    if(cr%9==0){
	        chef=cr/9;
	    }else{
	        chef=cr/9 +1;
	    }
	    if(pr%9==0){
	        rick = pr/9;
	    }else{
	        rick = pr/9 +1;
	    }
	    if(rick<=chef){
	        cout<<"1 "<<rick<<endl;
	    }
	    else{
	        cout<<"0 "<<chef<<endl;
	    }
	}
	
	return 0;
}
