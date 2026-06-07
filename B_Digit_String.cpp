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
    
    string s;
    cin >> s;

    vector<int> dp(16, -1);
    dp[0] = 0;

    for(char ch : s){
        int d = ch - '0';
        vector<int> ndp = dp;

        for(int mask = 0; mask < 16; mask++){
            if(dp[mask] == -1) continue;

            bool ok = true;

            if(d == 4) 
                ok = false;

            // 12,24, 32,44 not allowed
            if(d == 2){
                // if 1 already exists 12 possible
                if(mask & (1 << 0)) ok = false;
                // if 3 already exists 32 possible
                if(mask & (1 << 2)) ok = false;
            }

            if(ok){
                int nmask = mask|(1<<(d - 1));
                ndp[nmask] = max(ndp[nmask], dp[mask] +1);
            }
        }

        dp = ndp;
    }

    int best = 0;

    for(int x : dp)
        best = max(best, x);

    cout<< s.size() - best <<endl;
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t = 1;
    cin >> t;
    
    while(t--){
        solve();
    }

    return 0;
}