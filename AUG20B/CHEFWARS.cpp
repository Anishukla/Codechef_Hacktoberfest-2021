/*solution to
https://www.codechef.com/AUG20B/problems/CHEFWARS*/

#include <iostream>
using namespace std;

int Darth()
{
    long long int D,C;
    cin>>D>>C;
    while(true)
    {
        if(D<=0)
        {
            cout<<1<<endl;
            return 1;
        }
        else if(C<=0)
        {
            cout<<0<<endl;
            return 0;
        }
        else
        {
            D=D-C;
            C=C/2;
        }
    }
}
int main() {
	long long int T;
	cin>>T;
	while(T--)
	{
	    Darth();
	}
	return 0;
}
