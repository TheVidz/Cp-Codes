#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb push_back 
#define min3(a, b, c) min(min(a, b), c)
#define max3(a, b, c) max(max(a, b), c)
#define all(v) v.begin(), v.end()
#define forn(i, k, n) for(int i = k; i < n; i++)

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
    
    ll n,m;
    cin>>n>>m;
    ll a[n],b[m];
    forn(i,0,n) cin>>a[i];
    forn(i,0,m) cin>>b[i];
    
    sort(a,a+n);
    sort(b,b+m);
    ll l1 = 0, r1 = m-1, l2 = 0, r2 = n-1;
    ll ans = 0;
    while(r2-l2>=0){
        ll on = abs(a[r2]-b[l1]), tw = abs(a[l2]-b[r1]), mx = max(on, tw);
        if(mx==on){
            ans+= on;
            l1++;
            r2--;
        }else{
            ans+=tw;
            r1--;
            l2++;
        }
    }
    cout<<ans<<endl;
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