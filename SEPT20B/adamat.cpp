//https://www.codechef.com/SEPT20B/status/ADAMAT,kumarankit01
#include <bits/stdc++.h>
using namespace std;
int a[64][64];
void transpose(int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp = a[j][i];
            a[j][i] = a[i][j];
            a[i][j] = temp;
        }
    }
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count = 0;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cin>>a[i][j];
	        }
	    }
	    for(int i=n-1; i>=0; i--){
	        int s=0;
	        for(int j=n-1;j>=0;j--){
	            s+=a[i][j];
	        }
	        if(!(s==pow(n,2)*(i)+(n*(n+1))/2)){
	            transpose(i+1);
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
