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
    
    int n, m, k; 
        cin >> n >> m >> k;
        string s;
        cin >> s;
        vector<int> dp(n + 2, -1);
        dp[0] = k;
        for (int i = 1; i <= n + 1; i++) {
            if (i != n + 1 && s[i - 1] == 'C') 
                continue;
            for (int t = 1; t <= m; t++)
                if (i - t >= 0 && (i - t == 0 || s[i - t - 1] == 'L'))
                    dp[i] = max(dp[i], dp[i - t]);
            if (i > 1 && s[i - 2] == 'W') 
                dp[i] = max(dp[i], dp[i - 1] - 1);
        }
        if (dp[n + 1] >= 0) 
            cout << "YES\n";
        else 
            cout << "NO\n";


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