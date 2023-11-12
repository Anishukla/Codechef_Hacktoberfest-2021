// Problem Link : https://www.codechef.com/AUG21B/problems/PROBDIFF
// Profile Link : https://www.codechef.com/users/harshit846

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--) //O(q) --> Rest all work in almost constant time complexity
    {
        vector<int> vec(4);
        for (int i = 0; i < 4; i++)
            cin >> vec[i];
        sort(vec.begin(), vec.end());
        int count = 0;
        for (int i = 0; i < 3; i++)
        {
            if (vec[i] == vec[i + 1])
                count++; //stores the number of similar elements
        }
        /*
        Case 1: 1 3 4 2 --> Count = 0 --> (1,3),(4,2) can be one possibility
        Case 2: 1 3 2 2 --> Count = 1 --> (1,2),(2,3) is the only one
        Case 3: 1 1 2 2 --> Count = 2 --> (1,2),(1,2) is the only one
        Case 4: 1 2 2 2 --> Count = 2 --> (1,2) is only one way
        Case 5: 1 1 1 1 --> Count = 3 --> No possible way
        */
        if (count <= 1) 
            cout << "2\n";
        else if (count == 3)
            cout << "0\n";
        else
        {
            if (vec[1] == vec[2])
                cout << "1\n";
            else
                cout << "2\n";
        }
    }
}
