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
    int a[2*n];
    for (int i = 0; i < 2*n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+2*n);

    ll sum=0;
    for (int i = 0; i < n-1; i++)
    {
        sum+=abs(a[i]-a[i+1]);
    }
    for (int i = n; i < 2*n-1; i++)
    {
        sum+=abs(a[i]-a[i+1]);
    }
    cout<<sum<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" "<<a[2*n-i-1]<<endl;
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