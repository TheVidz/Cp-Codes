#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb push_back 
#define f first
#define s second 
#define min3(a, b, c) min(min(a, b), c)
#define max3(a, b, c) max(max(a, b), c)
#define all(v) v.begin(), v.end()


typedef long long ll;
typedef double ld;
typedef long double lld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pii> vpi;
typedef vector<pll> vpl;

const int INF = 1e9;
//const ll INF = 1e18;
const ll mod = 1000000007;
// const ll mod = 998244353;


bool possi(int k, vector<pair<ll,ll>> v){
bool ans=1;
ll left=0,right=0;
for (int i = 0; i < v.size(); i++)
{
    ll l=v[i].first;
    ll r=v[i].second;
    if(left<l && (right+k)<l){
        ans=0;
    }else if(left>r && (left-k)>r){
        ans=0;
    }else if(right<=l){
        left =l;
        right=min(r,right+k);
    }else if(left>=r){
        left = max(l,left-k);
        right =r;
    }else{
        left = max(l,left-k);
        right = min(r,right+k);
    }
    
}
return ans;
}

void solve(){
	
	int n;
    cin>>n;
    vector<pair<ll,ll>> lr;

    for (int i = 0; i < n; i++)
    {
        ll l,r;
        cin>>l>>r;
        lr.pb(make_pair(l,r));
    }
    ll lo=0,hi=1e9,mid;
    while((hi-lo)>1){
        mid=(hi+lo)/2;
        if(possi(mid,lr)){
            hi=mid;
        }else{
            lo=mid+1;
        }
    }
    if(possi(lo,lr)){
        cout<<lo<<endl;
    }else{
        cout<<hi<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int t=1;
    cin>>t;

    while(t--) 
    	solve();
    
    return 0;
}