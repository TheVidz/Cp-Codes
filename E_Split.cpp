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
    long long k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> total_freq(n + 1, 0);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        total_freq[a[i]]++;
    }

    for (int i = 1; i <= n; ++i) {
        if (total_freq[i] % k != 0) {
            cout << 0 << endl;
            return;
        }
    }

    vector<int> target_freq(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        target_freq[i] = total_freq[i] / k;
    }

    long long awesome_subarrays = 0;
    int r = -1;
    vector<int> current_freq(n + 1, 0);

    for (int l = 0; l < n; ++l) {
        while (r + 1 < n) {
            int next_val = a[r + 1];
            if (current_freq[next_val] + 1 <= target_freq[next_val]) {
                r++;
                current_freq[next_val]++;
            } else {
                break;
            }
        }

        awesome_subarrays += (r - l + 1);

        current_freq[a[l]]--;
    }

    cout << awesome_subarrays << endl;
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



