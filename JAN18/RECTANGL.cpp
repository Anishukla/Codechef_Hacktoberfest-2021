#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t,a,flag;
	cin>>t;
	while(t--){
    	map<int,int>m;
    	flag=0;
    	for(int i=0;i<4;i++){
    	    cin>>a;
    	    m[a]+=1;
    	}
    	for(map<int,int>::iterator it=m.begin();it!=m.end();++it){
    	    if((it->second!=2)&&(it->second!=4)){
        	    cout<<"NO"<<endl;
        	    flag=1;
        	    break;
    	    }
    	}
    	if(flag==0)
    	    cout<<"YES"<<endl;
	}
	return 0;
}