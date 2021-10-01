// Problem : https://www.codechef.com/MARCH21B/problems/COLGLF4
// Solution : https://www.codechef.com/viewsolution/43680220
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
using ll=long long;
using namespace std;
ll checkConditions(ll n, ll e, ll h, ll a, ll b, ll c){
    if(n <= 0){
        return 0;
    }
    ll ans = 1e18;
    //only cake
    if(n <= e and n <= h){
        ans = min(ans, n * c);
    }
    //only shake
    if(3 * n <= h){
        ans = min(ans, n * b);
    }
    //only omlette
    if(2 * n <= e){
        ans = min(ans, n * a);
    }
    //shake and cake
    if((h - n) / 2 >= 1 and (h - n) / 2 >= n - e){
        ll temp = b - c < 0 ? min(n - 1, (h - n) / 2) : max((ll)1, n - e);
        ans = min(ans, (b - c) * temp + n * c);
    }
    //omlette and cake
    if(e - n >= 1 and e - n >= n - h){
        ll temp = a - c < 0 ? min(n - 1, e - n) : max((ll)1, n - h);
        ans = min(ans, (a - c) * temp + n * c);
    }
    //omlette and shake
    if(e / 2 >= 1 and e / 2 >= (3 * n - h + 2) / 3){
        ll temp = a - b < 0 ? min(n - 1, e / 2) : max((ll)1, (3 * n - h + 2) / 3);
        ans = min(ans, (a - b) * temp + n * b);
    }
    //all three together
    if(e >= 3 and h >= 4 and n >= 3){
        ans = min(ans, a + b + c + checkConditions(n - 3, e - 3, h - 4, a, b, c));
    }

    return ans;
}

int main(){
    IOS
    int t = 1;
    cin >> t;
    while(t--){
        ll n, e, h, a, b, c, res;
        cin >> n >> e >> h >> a >> b >> c;
        res = checkConditions(n, e, h, a, b, c);
        cout << (res == 1e18 ? -1 : res) << endl;
    }
    return 0;
}