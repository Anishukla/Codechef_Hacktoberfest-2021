/*
Link to the problem:
https://www.codechef.com/AUG19B/problems/MSNSADM1
Link to my profile:
https://www.codechef.com/users/vatikaa08
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int A[N], B[N], mx=0;
        for(int i=0; i<N; i++){
            cin>>A[i];
        }
         for(int i=0; i<N; i++){
            cin>>B[i];
        }
         for(int i=0; i<N; i++){
            A[i] = A[i]*20 -B[i]*10;
            if(A[i]<0){
                A[i] = 0;
            }
            if(A[i]>mx){
                mx = A[i];
            }
           
        }
         cout<<mx<<" ";

    }
    return 0;
}