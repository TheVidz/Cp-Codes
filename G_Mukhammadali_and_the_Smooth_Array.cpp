#include <bits/stdc++.h>
using namespace std;

#define pb push_back 
#define all(v) v.begin(), v.end()
#define forn(i, k, n) for(int i = k; i < n; i++)
#define pyes cout<<"YES"<<endl;return
#define pno cout<<"NO"<<endl;return

typedef long long ll;
typedef vector<ll> vll;

const ll INF = 1e15;

//The only verdict is vengeance; a vendetta, held as a votive, not in vain, for the value and veracity of such shall one day vindicate the vigilant and the virtuous.

void solve(){
    int n;
    cin >> n;
    vll a(n), c(n);
    forn(i,0,n) cin >> a[i];
    forn(i,0,n) cin >> c[i];

    vll vals = a;
    sort(all(vals));
    vals.erase(unique(all(vals)), vals.end());

    int m = (int)vals.size();
    vector<ll> dp(m, INF);

    forn(v,0,m){
        if (vals[v] == a[0]) dp[v] = 0;  
        else dp[v] = c[0];  
    }

    for(int i=1; i<n; i++){
        vector<ll> newdp(m, INF);

        vector<ll> prefixMin(m, INF);
        prefixMin[0] = dp[0];
        for(int j=1; j<m; j++) prefixMin[j] = min(prefixMin[j-1], dp[j]);

        forn(v,0,m){
            ll cost_to_set = (vals[v] == a[i]) ? 0 : c[i];
            newdp[v] = prefixMin[v] + cost_to_set;
        }
        dp = newdp;
    }

    ll ans = *min_element(all(dp));
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
