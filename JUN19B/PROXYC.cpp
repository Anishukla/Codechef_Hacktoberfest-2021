//Link to question:
//    https://www.codechef.com/JUNE19B/problems/PROXYC
//Link to my AC solution:
//    https://www.codechef.com/viewsolution/24513772

#include <bits/stdc++.h>
#define lli long long int
#define pb push_back
#define mp make_pair
#define eb emplace_back
#define pf push_front
#define MOD 1000000007
#define F first
#define S second
#define inf INT_MAX
#define gcd(x,y) __gcd(x,y)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

int main()
{
    IOS
    int test;
    cin >> test;
    while(test--)
    {
        string input;
        int days = 0, pflag = 0, res = 0, req = 0;
        cin >> days;
        cin >> input;
        req = ceil(0.75 * days);
        for(int i = 0; i < days; i++)
        {
            if(input[i] == 'P')
            {
                ++pflag;
            }
        }
        if(pflag == req)
        {
            cout << pflag - req << endl;
        }
        else
        {
            for(int i = 2; i < (days - 2); i++)
            {
                 if(input[i-1] == 'P' || input[i-2] == 'P')
                 {
                    if(input[i+1] == 'P' || input[i+2] == 'P')
                    {
                        if(input[i] == 'A')
                        {
                            ++pflag;
                            if(pflag <= req)
                                ++res;
                        }
                    }
                 }
            }
        }
            if(pflag >= req)
            {
                cout << res << endl;
            }
            else
            {
                cout << "-1" << endl;
            }

    }
    return 0;
}
