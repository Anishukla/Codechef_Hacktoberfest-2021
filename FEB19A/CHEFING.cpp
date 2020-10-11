/*
@author: Ilias Khan
====

Link to the problem: 
    https://www.codechef.com/FEB19A/problems/CHEFING/
Link to my profile:
    https://www.codechef.com/users/iliaskhan
*/


#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string str[n];
	    int arr[26]={0};
	 
	    for(int i=0;i<n;i++)
	    {
	      
	        cin>>str[i];
	        for(int j=0;j<str[i].size();j++)
	        {
	            arr[str[i][j]-97]= arr[str[i][j]-97]==i?arr[str[i][j]-97]+1:arr[str[i][j]-97];
	        }
	    }
	    int count=0;
	    for(int i=0;i<26;i++)
	    {
	        if(arr[i]==n)
	            count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
