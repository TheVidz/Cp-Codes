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
    
    int n;
    cin>>n;
    vll a(n), b(n);
    forn(i,0,n) cin>>a[i];
    forn(i,0,n) cin>>b[i];

    ll mx = 0;
    ll mn = 0;

    forn(i, 0, n) {
        ll next_mx = max(mx - a[i], b[i] - mn);
        ll next_mn = min(mn - a[i], b[i] - mx);
        mx = next_mx;
        mn = next_mn;
    }
    cout << mx << endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t=1;
    cin>>t;
    
        while(t--) 
            {
            solve();
            
}
        return 0;
}