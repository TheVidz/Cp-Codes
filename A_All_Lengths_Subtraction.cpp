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

void solve() {
    int n;
    cin >> n;
    deque<int> d;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        d.push_back(val);
    }

    int dec = 0;
    for (int k = 1; k <= n; ++k) {
        int target = 1 + dec;

        if (d.front() == target) {
            d.pop_front();
        } else if (d.back() == target) {
            d.pop_back();
        } else {
            cout << "NO" << endl;
            return;
        }
        dec++;
    }

    cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        solve();
    }
    return 0;
}