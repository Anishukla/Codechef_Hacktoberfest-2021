// Problem : https://www.codechef.com/MARCH21B/problems/CONSADD
// Solution : https://www.codechef.com/viewsolution/43821108
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
using ll=long long;
using namespace std;
bool isSame(int A[][1005], int B[][1005], int r, int c){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(A[i][j] != B[i][j]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    IOS
    int t;
    cin>>t;
    while(t--){
        int r, c, x;
        cin >> r >> c >> x;
        int A[r][1005], B[r][1005];
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                cin >> A[i][j];
            }
        }
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                cin >> B[i][j];
            }
        }
        
        if(r < x){
            for(int i = 0; i < r; i++){
                for(int j = 0; j < c - x + 1; j++){
                    if(A[i][j] != B[i][j]){
                        int diff = B[i][j] - A[i][j];
                        A[i][j] += diff;
                        int k = 1;
                        while(k < x){
                            A[i][j + k] += diff;
                            k++;
                        }
                    }
                }
            }
            cout << (isSame(A, B, r, c) ? "Yes" : "No") << endl;
        }

        else if(c < x){
            for(int i = 0; i < c; i++){
                for(int j = 0; j < r - x + 1; j++){
                    if(A[j][i] != B[j][i]){
                        int diff = B[j][i] - A[j][i];
                        A[j][i] += diff;
                        int k = 1;
                        while(k < x){
                            A[j + k][i] += diff;
                            k++;
                        }
                    }
                }
            }
            cout << (isSame(A, B, r, c) ? "Yes" : "No") << endl;
        }

        else if(c >= x and r >= x){
            for(int i = 0; i < r; i++){
                for(int j = 0; j < c - x + 1; j++){
                    if(A[i][j] != B[i][j]){
                        int diff = B[i][j] - A[i][j];
                        A[i][j] += diff;
                        int k = 1;
                        while(k < x){
                            A[i][j + k] += diff;
                            k++;
                        }
                    }
                }
            }
            for(int i = 0; i < c; i++){
                for(int j = 0; j < r - x + 1; j++){
                    if(A[j][i] != B[j][i]){
                        int diff = B[j][i] - A[j][i];
                        A[j][i] += diff;
                        int k = 1;
                        while(k < x){
                            A[j + k][i] += diff;
                            k++;
                        }
                    }
                }
            }
            cout << (isSame(A, B, r, c) ? "Yes" : "No") << endl;
        }
    }


    return 0;
}