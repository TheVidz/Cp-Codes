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


void solve(){
	
	int n;
    cin>>n;
    ll arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<int>());
    
    ll prefix[n];
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = (prefix[i-1]+arr[i])%mod;
        cout<<prefix[i]<<" ";
    }
    cout<<endl;
    ll ans = arr[0];


    for (int i = 1; i < n; i++)
    {
        ll temp = (arr[i]*prefix[i-1])%mod;
        ans = max(ans,temp);
    }
    ll temp = (arr[]*prefix[n-1])%mod;
        ans = max(ans,temp);
    cout<<ans%mod<<endl;
    
    
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