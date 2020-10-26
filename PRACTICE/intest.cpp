#include <iostream>

using namespace std;

int main()
{
    int sum = 0, n, k, curr;
    cin >> n;
    cin >> k;

    for(int i = 0; i < n; i++) {
        cin >> curr;
        if(curr % k == 0) sum++;
    }

    cout << sum << endl;
    return 0;
}
