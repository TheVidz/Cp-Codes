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
    
    ll s,k,m;
    cin>>s>>k>>m;
   
    ll n = m/k; 
    ll rem = m%k; 
    ll sand_at_top;

    if(n % 2 == 0) {
        sand_at_top=s;
    }else{
        sand_at_top=min(s, k);
    }

    ll ans = max(0ll,sand_at_top-rem);
    cout<<ans<<endl;
    // if(s<k){
    //     //we get no flips
        
    //     cout<<max(0ll, s-m)<<endl;
    //     return;
    // }else if(s==k){
    //     ll rem = m%k;

    //     cout<<(s - rem)<<endl;
    //     return;
    // }else {
    //     // s > k it never gets fullfileed
    //     // 
    //     if(2*k < s){
    //         // less than half is flipped
    //         // it gets filled back in 2
    //         ll rem = m%k;

    //         ll turn = m/k;

    //         if(turn&1){
    //             cout<<rem<<endl;
    //         }else{
    //             cout<<s-k-m<<endl;
    //         }

    //     }else{
    //         // 2*k > s

    //     }
    //     return;
    // }
    

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