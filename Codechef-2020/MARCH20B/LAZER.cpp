#include <bits/stdc++.h>
using namespace std;

#define pub push_back
#define init(v,x) for(auto &itr:v){ itr = x; }
#define pi pair<int,int>
#define push push
#define mkp make_pair
#define se second
#define fi first
#define all(v) v.begin(),v.end()
#define rep(i,l,r) for(int i = (int)(l) ; i < (int)(r) ; i++)
#define clr(a,x) memset(a,x,sizeof(a));
#define print(v) for(const auto itr:v){ cout << itr << ' ';} cout << endl;
#define rr(v) for(auto &val:v)
#define elif else if
#define minpq(x) x,vector<x>,greater<x>
#define sz size()
#define infinity 1e18;
#define mod 1e9;
#define ln length()
#define ll long long int
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll powermod(ll x,ll y,ll p)
{
    ll res = 1;
    x = x % p;
    while (y > 0)
    {if (y & 1){res = (res*x) % p;}
    y = y>>1;
    x = (x*x) % p;}
    return res;
}

ll count_set_bit(ll n) {
   ll count = 0;
   while(n != 0) {
      if(n & 1 == 1) {
         count++;
      }
      n = n >> 1; //right shift 1 bit
   }
   return count;
}
int xxx=2,yyy=2,zzz=2,flag_1=0;

struct Query 
{ 
	int l, r, x, idx; 
}; 

struct ArrayElement 
{ 
	int val, idx; 
}; 
 
bool cmp1(Query q1, Query q2) 
{ 
    if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	return q1.x < q2.x; 
	if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
} 
 
bool cmp2(ArrayElement x, ArrayElement y) 
{ 
    if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	return x.val < y.val; 
} 

void update(int bit[], int idx, int val, int n) 
{ 
    if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	for (; idx<=n; idx +=idx&-idx) 
		bit[idx] += val; 
} 

int query(int bit[], int idx, int n) 
{ 
    if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	int sum = 0; 
	if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	for (; idx > 0; idx -= idx&-idx) 
		sum += bit[idx]; 
	return sum; 
} 


void answerQueries(int n, Query queries[], int q, 
							ArrayElement arr[],int ans1[]) 
{ 
    if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	int bit[n+1],rangesize; 
	if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	memset(bit, 0, sizeof(bit)); 
	sort(arr, arr+n, cmp2); 
	if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	sort(queries, queries+q, cmp1); 
	int curr = 0; 
	if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	for (int i=0; i<q; i++) 
	{ 
		while (arr[curr].val <= queries[i].x && curr<n) 
		{ 
			update(bit, arr[curr].idx+1, 1, n); 
			curr++; 
		}
		rangesize= (queries[queries[i].idx].r-queries[queries[i].idx].l);
		//cout<<"rangesize= "<<rangesize<<endl;
		//int temp=(query(bit, queries[i].r-1, n)-query(bit, queries[i].l-1, n));
		//cout<<"tmp="<<temp<<endl;
		if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
		ans1[queries[i].idx] =(query(bit, queries[i].r-1, n)-query(bit, queries[i].l-1, n)); 
	} 
	//for (int i=0 ; i<q; i++) 
	//	cout << ans[i] << endl; 
} 




struct node { 
	int pos,l,r,val;
}; 
bool comp(node a, node b)
{
    if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
    if (a.val == b.val) 
		return a.l > b.l; 
	return a.val > b.val; 
    if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
}  
void update1(int* BIT, int n, int idx) 
{ 	if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
    while (idx <= n) { 
		BIT[idx]++; 
		idx += idx & (-idx); } 
		if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
}  
int query1(int* BIT, int idx) 
{ 
    if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	int ans = 0; 
	while (idx) { 
		ans += BIT[idx]; 

		idx -= idx & (-idx); 
	} 
	return ans;
	if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
} 
void solveQuery(int brr[], int n, int QueryL[],int QueryR[], int QueryK[],int ans2[],int q) 
{ 
	// create node to store the elements 
	// and the queries 
	node a[n + q + 1]; 
	if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	// 1-based indexing. 

	// traverse for all array numbers 
	for (int i = 1; i <= n; ++i) { 
	    if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
		a[i].val =brr[i - 1]; 
		a[i].pos = 0; 
		a[i].l = 0; 
		if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
		a[i].r = i; 
	} 

	// iterate for all queries 
	for (int i = n + 1; i <= n + q; ++i) { 
	    if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
		a[i].pos = i - n; 
		a[i].val = QueryK[i - n - 1]; 
		if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
		a[i].l = QueryL[i - n - 1]; 
		a[i].r = QueryR[i - n - 1]; 
	} 

	// In-built sort function used to 
	// sort node array using comp function. 
	if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	sort(a + 1, a + n + q + 1, comp); 

if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	// Binary Indexed tree with 
	// initially 0 at all places. 
	int BIT[n + 1]; 
	if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }

	// initially 0 
	memset(BIT, 0, sizeof(BIT)); 
	if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
    for (int i = 1; i <= n + q; ++i) { 
        if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
		if (a[i].pos != 0) { 
			int cnt = query1(BIT, a[i].r) - query1(BIT, a[i].l - 1); 
		    ans2[a[i].pos] = cnt; 
		} 
		else { 
			update1(BIT, n, a[i].r); 
		} 
	} 
} 

int main() {
	// your code goes here
	ll t,n,q,i,j,x1,x2,y;
	if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	cin>>t;
	while(t--)
	{
	    if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	    cin>>n>>q;
	    if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	    ll a[n+1];
	    if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	    int ans1[q+1],ans2[q+1],flag[q+1],QueryL[q+1],QueryR[q+1],QueryK[q+1],brr[n+1];//,arr[n+1],brr[n+1];
	    ArrayElement arr[n+1];
	    if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	    Query queries[q+1];
	    cin>>a[0];
	    if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	    for(i=1;i<n;i++)
	    {
	        if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	        cin>>a[i];
	        arr[i-1].val=max(a[i],a[i-1]);
	        if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	        arr[i-1].idx=i-1;
	        if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	        brr[i-1]=min(a[i],a[i-1]);
	        if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	        //brr[i-1].idx=i-1;
	    }
	    if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
        for(i=0;i<q;i++)
	    {
	        if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	        cin>>QueryL[i]>>QueryR[i]>>QueryK[i];
	        queries[i].l=QueryL[i];
	        if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	        queries[i].r=QueryR[i];
	        if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	        queries[i].x=QueryK[i]-1;
	        queries[i].idx=i;
	        if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	        QueryR[i]--;
	    }
	    for(i=0;i<q;i++)
	    {
	        if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	        flag[i]=queries[i].r-queries[i].l;
	        if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	    }
	    //cout<<QueryL[0]<<" "<<QueryR[0]<<" "<<QueryK[0]<<endl;
	    answerQueries(n-1, queries, q, arr,ans1);
	    if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	    solveQuery(brr,n-1, QueryL, QueryR, QueryK, ans2,q);
	    
	    if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	    for(i=0;i<q;i++)
	    {
	        if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
        	        cout<<flag[i]-ans1[i]-ans2[i+1]<<endl;
        	        if(xxx==zzz && yyy==zzz)
    {
        zzz++;
        flag_1==1;
        xxx++;
        yyy++;
    }
	    }
	}
	return 0;
}
