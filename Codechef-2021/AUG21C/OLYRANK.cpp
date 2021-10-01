// Problem Link : https://www.codechef.com/AUG21B/problems/OLYRANK
// Profile Link : https://www.codechef.com/users/harshit846

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--) //O(q) --> Runs 1000 times in the worst case
    {
        int g1, s1, b1, g2, s2, b2;
        cin >> g1 >> s1 >> b1 >> g2 >> s2 >> b2;
        int medal_1 = g1 + s1 + b1; //Total medals of 1st country
        int medal_2 = g2 + s2 + b2; //Total medals of 2nd country
        if (medal_1 > medal_2)
            cout << "1\n";
        else
            cout << "2\n";
    }
}