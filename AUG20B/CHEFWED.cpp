// https://www.codechef.com/AUG20B/problems/CHEFWED
// https://www.codechef.com/viewsolution/36536994

#include<bits/stdc++.h>

#define int         long long
#define vi     		vector<int>
#define pb     		push_back
#define mk     		make_pair
#define pii    		pair<int,int>
#define endl 		"\n"
#define watch(x) 	cout<<"value of "<<#x<<" is "<<x<<endl
#define watchh(x,y) cout<<"value of "<<#x<<" is "<<x <<"   "<< #y << " is "<<y<<endl;
#define MOD 		1000000007

using namespace std;

int dp[1001][1001];

int minCost(vector<int>arr, int i, int j, int cost) {
	if (i > j)return 0;

	if (dp[i][j] != -1)return dp[i][j];

	unordered_map<int, int>mp;
	int rep = 0;
	int ans = INT_MAX;

	for (int k = i; k <= j; k++) {
		mp[arr[k]]++;
		if (mp[arr[k]] == 2)rep += 2;
		if (mp[arr[k]] > 2)rep++;

		int c = cost + rep + minCost(arr, k + 1, j, cost);

		ans = min(ans, c);
	}

	return dp[i][j] = ans;

}

void solve()
{
	memset(dp, -1, sizeof(dp));
	int n, cost;
	cin >> n >> cost;

	vector<int>F(n);
	//unordered_map<int, int>mp;
	int rep = 0;
	for (int i = 0; i < n; i++) {
		cin >> F[i];
		//mp[F[i]]++;
		//if (mp[F[i]] == 2)rep += 2;
		//if (mp[F[i]] > 2)rep++;
	}
	int ccc = minCost(F, 0, n - 1, cost);
	//watch(ccc);
	//int ans = min(cost + rep, ccc);

	cout << ccc << endl;


}

signed main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("error.txt", "w", stderr);
// 	freopen("output.txt", "w", stdout);
// #endif

	int t = 1;
	cin >> t;
	while (t--)
	{
		solve();
	}

//	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}
