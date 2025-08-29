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
    int n;
    cin >> n;

    vi a(n);
    forn(i, 0, n) {
        cin >> a[i];
    }

    map<int, vi> positions;
    forn(i, 0, n) {
        positions[a[i]].pb(i);
    }

    vi dp(n + 1, 0);

    map<int, int> counts;

    forn(i, 1, n + 1) {
        dp[i] = dp[i-1];

        int x = a[i-1];
        counts[x]++;
        int k = counts[x]; 
        if (k >= x) {
            int j = positions[x][k - x];

            dp[i] = max(dp[i], dp[j] + x);
        }
    }

    cout << dp[n] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t = 1;
    cin >> t; 
    while(t--) {
        solve();
    }

    return 0;
}
