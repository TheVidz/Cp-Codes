#include <bits/stdc++.h>
using namespace std;

#define pb push_back 
#define all(v) v.begin(), v.end()
#define forn(i, k, n) for(int i = k; i < n; i++)
#define pyes cout<<"YES"<<endl;return
#define pno cout<<"NO"<<endl;return

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

const int INF = 1e9;
const ll mod = 1000000007;

void solve(){
    
    ll n;
    cin>>n;
    vi a(n);
    forn(i,0,n) cin>>a[i];
    n = unique(all(a)) - a.begin();

    int ans = n;
    for (int i = 0; i + 2 < n; ++i) {
      ans -= (a[i] < a[i + 1] && a[i + 1] < a[i + 2]);
      ans -= (a[i] > a[i + 1] && a[i + 1] > a[i + 2]);
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