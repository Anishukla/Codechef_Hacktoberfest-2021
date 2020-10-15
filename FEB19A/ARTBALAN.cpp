/*
@author: Ilias Khan
====
Link to the problem: 
    https://www.codechef.com/FEB19A/problems/ARTBALAN/
Link to my profile:
    https://www.codechef.com/users/iliaskhan
*/

#include <iostream>
#include<algorithm>
#include <cmath>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    int n=str.size();
	    int arr[26]={0};
	    for(int i=0;i<n;i++)
	    {
	        arr[str[i]-65]++;
	    }
	    int minn=999999999;
	    for(int i=1;i<=n;i++)
	    {
	        int s=999999999;
	        if(n%i==0&&n/i<=26)
	        {
	            s=0;
	            int divi=n/i;
	            sort(arr,arr+26);
	            for(int j=25;j>=0;j--)
	            {
	                if(divi>0)
	                {
	                    divi--;
	                    s= arr[j]>i?s+arr[j]-i:s;
	                }
	                else
	                s+=arr[j];
	            }
	        }
	        minn=min(minn,s);
	    }
	    cout<<minn<<endl;
	}
}
