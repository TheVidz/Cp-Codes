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
    string r;
    cin >> r;
    int n = r.length();

    vector<vi> dp(n, vi(2, INF));

    dp[0][0] = (r[0] == 'u' ? 1 : 0);
    dp[0][1] = INF; // Not allowed

    for(int i = 1; i < n; i++) {
        int cost_s = (r[i] == 'u' ? 1 : 0);
        dp[i][0] = min(dp[i-1][0], dp[i-1][1]) + cost_s;

        if (i < n - 1) {
            int cost_u = (r[i] == 's' ? 1 : 0);
            dp[i][1] = dp[i-1][0] + cost_u;
        }
    }

    cout << dp[n-1][0] << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t=1;
    cin>>t;
    
    while(t--){
        solve();
    }

    return 0;
}