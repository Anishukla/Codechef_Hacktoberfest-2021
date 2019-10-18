#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        vector <long long> vec(n);
        for (long long i=0;i<n;i++) {
            cin >> vec[i];
        }

        if (n%2 != 0) {
            if (k > n / 2) {
                vec[(n-1)/2] = 0;
            }
        }

        k = k % (3 * n);

        for (long long i=0;i<k;i++) {
            vec[i%n] = vec[i%n] ^ vec[n-(i%n)-1];
        }

        for (long long i=0;i<n;i++) {
            cout << vec[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
