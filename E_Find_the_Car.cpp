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
    double a[k],b[k];
    forn(i,0,k) cin>>a[i];
    
    forn(i,0,k) cin>>b[i];
    
    forn(i,0,q){
        ll d;
        cin>>d;
        int x = 0;
        while(x<k&&a[x]<d){
            x++;
        }
        x--;
        double ans=0;
        if(d<=a[0]) ans = d/(a[0]/b[0]);
        else ans = b[x] + (d-a[x])/((a[x+1]-a[x])/(b[x+1]-b[x]));
        cout<<(ll)ans<<" ";

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