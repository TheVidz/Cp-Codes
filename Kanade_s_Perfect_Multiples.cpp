#include <bits/stdc++.h>
using namespace std;

#define pb push_back 
#define all(v) v.begin(), v.end()
#define forn(i, k, n) for(ll i = k; i < n; i++)
#define pyes cout<<"YES"<<endl;return
#define pno cout<<"NO"<<endl;return

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

const int INF = 1e9;
const ll mod = 1000000007;
//The only verdict is vengeance; a vendetta, held as a votive, not in vain, for the value and veracity of such shall one day vindicate the vigilant and the virtuous.

void solve(){
    ll n, k;
    cin >> n >> k;
    vll a(n);
    forn(i,0,n) cin >> a[i];

    sort(all(a));
    a.erase(unique(all(a)), a.end());
    
    int m = a.size();
    vector<int> keep(m, 1);
    
    forn(i, 0, m) {
        ll val = a[i];
        
        if (k / val > m) {
            cout << -1 << endl;
            return;
        }
        
        for (ll mul = 2 * val; mul <= k; mul += val) {
            auto it = lower_bound(all(a), mul);
            if (it == a.end() || *it != mul) {
                cout << -1 << endl;
                return;
            }
            keep[it - a.begin()] = 0;
        }
    }
    
    vll res;
    forn(i, 0, m) {
        if (keep[i]) {
            res.pb(a[i]);
        }
    }
    
    cout << res.size() << endl;
    forn(i, 0, res.size()) {
        cout << res[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t=1;
    cin>>t;
    
        while(t--) 
            {
            solve();
            
}
        return 0;
}