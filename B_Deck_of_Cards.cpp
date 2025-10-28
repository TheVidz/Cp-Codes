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
    
    int n, k;
        string s;
        cin >> n >> k >> s;
        int cnt0 = 0, cnt2 = 0;
        for (char c : s) {
            if (c == '0') ++cnt0;
            else if (c == '2') ++cnt2;
        }
        int L = cnt0;
        int R = cnt0 + cnt2;
        int nk = n - k; 
        int rightThreshold = n - k + L + 1; 

        string ans;
        ans.reserve(n);
        for (int i = 1; i <= n; ++i) {
            bool poss = (i <= R) || (i >= rightThreshold);
            if (!poss) {
                ans.push_back('+');
                continue;
            }
            
            int lo = max(L, i - nk);
            int hi = min(R, i - 1);
            if (lo <= hi) ans.push_back('?');
            else ans.push_back('-');
        }
        cout << ans << '\n';

    
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