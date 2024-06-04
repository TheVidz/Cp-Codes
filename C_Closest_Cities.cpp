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
    
    ll n;
    cin>>n;
    ll a[n];
    forn(i,0,n) cin>>a[i];

    ll L[n]={0}, R[n]={0};
    L[1] = 1;
    forn(i,2,n){
        if(abs(a[i-1]-a[i]) < abs(a[i-2] - a[i-1])){
            L[i] = L[i-1] + 1;
            
        }else{
            L[i] = L[i-1] + abs(a[i]-a[i-1]);
        }
    }
    R[n-2] = 1;
    for(ll i = n-3;i>=0;i--){
        if(abs(a[i]-a[i+1]) < abs(a[i+1] - a[i+2])){
            R[i] = R[i+1] +1;
        }else{
            R[i] = R[i+1] + abs(a[i+1]-a[i]);
        }
    }


    ll m;
    cin>>m;
    while(m-->0){
        ll x,y;
        cin>>x>>y;
        if(x<y){
            cout<<L[y-1] - L[x-1]<<endl;
        }else{
            cout<<R[y-1] - R[x-1]<<endl;
        }
            
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