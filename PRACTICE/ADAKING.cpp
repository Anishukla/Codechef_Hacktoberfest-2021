"""
@author: shresth12-jain
"""

""" Link to the problem: 
    https://www.codechef.com/problems/ADAKING
    Link to my profile:
    https://www.codechef.com/users/shresth_jain """

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while (t--)
	{
	  long long i,j,k;
	  cin >>k;

	  for (i=0;i<8;i++)
	  {
	      for (j=0;j<8;j++)
	      {
	          if (i==0 && j==0)
	          {
	          	cout<< "O";
				k--;
			  }
	          else if (k>0)
	          {
			  cout<< ".";
	       	 k--;
	          }
			  else
	          {
			  cout<<"X";
			  
			  }
	       }
		    cout<<"\n";
	  }
	}
	return 0;
}
