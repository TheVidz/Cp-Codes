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
    set<ll> a;
    forn(i,0,n){
        ll temp;
        cin>>temp;
        a.insert(temp);
    }
    
    vector<ll> au;
    for(auto x:a){
        au.pb(x);
    }
    int pnt = 0, ans = 0;
    for (int i = 0; i < au.size(); i++) {
        while(au[i] - au[pnt] >= n) {
            pnt++;
        }
        ans = max(ans, i - pnt + 1);
    }
    cout << ans << endl;


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