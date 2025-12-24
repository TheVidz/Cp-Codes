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

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    forn(i,0,n) cin >> a[i];
    sort(a.begin(), a.end());
    cout << max(a[0], a[1] - a[0]) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}