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
    
    ll n;
    cin >> n;
    vll a(n);
    forn(i, 0, n) cin >> a[i];

    vll suf(n +1,0);
    for (int i =n -1;i>=0; i--) {
        suf[i] =suf[i+1] +a[i];
    }

    ll ans = -4e18; 
    ll current_pre_abs =0;

    forn(k, 0, n) {
        ll val;
        if (k == 0) {
            val = -suf[1];
        } else {
            val = a[0] + current_pre_abs -suf[k+1];
        }
        ans = max(ans,val);

        if (k >= 1) {
            current_pre_abs+= abs(a[k]);
        }
    }
    cout<<ans<<endl;

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