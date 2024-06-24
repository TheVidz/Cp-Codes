#include <bits/stdc++.h>
using namespace std;

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
    
    ll n,k,q;
    cin>>n>>k>>q;
    vl a(k+1);
    vl b(k+1);
    a[0] = 0;
    b[0] = 0;
    forn(i,1,k+1) cin>>a[i];
    
    forn(i,1,k+1) cin>>b[i];
    
    forn(i,0,q){
        ll d;
        cin>>d;
        ll lo =0, hi = k;
        while(lo<=hi){
            ll mid = lo + hi>>1;

            if(a[mid] > d){
                hi = mid - 1;
            }else{
                lo = mid + 1;
            }
        }
        if(a[hi] == d){
                cout<<b[hi]<<" ";
                continue;
        }
        long long ans = b[hi] + (d - a[hi]) * (b[hi+1]-b[hi])/(a[hi+1]-a[hi]);
        cout<<ans<<" ";

    }
    cout<<endl;
    
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