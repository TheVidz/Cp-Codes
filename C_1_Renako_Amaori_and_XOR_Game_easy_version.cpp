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

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    int ax = 0;
    forn(i,0,n) {
        cin >> a[i];
        ax ^= a[i]; 
    }

    int bx = 0;
    forn(i,0,n) {
        cin >> b[i];
        bx ^= b[i]; 
    }

    if (ax == bx) {
        cout << "Tie" << endl;
        return;
    }

    int last_diff_index = -1;
    forn(i,0,n) {
        if (a[i] != b[i]) {
            last_diff_index = i + 1;
        }
    }
    if (last_diff_index % 2 != 0) {
        cout << "Ajisai" << endl;
    } else {
        cout << "Mai" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}