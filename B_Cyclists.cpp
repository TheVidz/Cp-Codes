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
    
    ll n,k,p,m;
    cin>>n>>k>>p>>m;
    vll a(n);
    forn(i,0,n) cin>>a[i];

    ll ap = a[p-1];
    ll c1 = 0;

    if(p>k){
        //its not in first k elemtns
        vll prefix;
        forn(i,0,p-1){
            prefix.push_back(a[i]);
        }
        sort(all(prefix));

        forn(i,0,p-k){
            c1 += prefix[i];
        }

    }

    if(c1 + ap > m){
        cout<<0<<endl;
        return;
    }

    ll rem = m - (c1 + ap);
    ll ans = 1;

    vll other;
    forn(i,0,n){
        if(i!=p-1){
            other.pb(a[i]);
        }
    }
    sort(all(other));

    ll c2 = 0;
    forn(i,0,n-k){
        c2 += other[i];
    }

    ans+=rem/(c2+ap);

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