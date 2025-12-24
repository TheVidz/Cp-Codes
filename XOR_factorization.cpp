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

void solve(){
    
    int n, k;
    cin >> n >> k;

    if (k % 2 != 0) {
        forn(i, 0, k) {
            cout << n << " ";
        }
        cout << endl;
    } else {
        cout << 0 << " ";
        forn(i, 0, k - 1) {
            cout << n << " ";
        }
        cout << endl;
    }

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