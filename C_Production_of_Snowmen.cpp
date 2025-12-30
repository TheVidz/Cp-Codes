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

ll get_valid_shifts(int n, vll &v1, vll &v2) {
    ll count = 0;
    forn(shift,0,n) {
        bool ok = true;
        forn(i,0,n) {
            if(v1[i]>=v2[(i + shift) % n]) {
                ok = false;
                break;
            }
        }
        if(ok) 
            count++;
    }
    return count;
}
void solve(){
    
    ll n;
    cin>>n;
    vll a(n),b(n),c(n);
    forn(i,0,n) cin>>a[i];
    forn(i,0,n) cin>>b[i];
    forn(i,0,n) cin>>c[i];

    ll ab = get_valid_shifts(n, a,b);
    ll bc = get_valid_shifts(n,b,c);
    cout<<n*ab*bc<<endl;

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