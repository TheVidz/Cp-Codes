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
ll smol(ll num){
    if(num%2==0){
        return 2;
    }
    ll it = 3;

    while(it<=sqrt(num)){
        if(num%it==0){
            return it;
        }
        it+=2;
    }
    return num;
}
void solve(){
    
    ll w,h,d, n;

    cin>>w>>h>>d>>n;

    
    
    // the whole cuboid has volume, which is divided into n blocks such that vol = (x+1)(y+1)(z+1), so we have to find x y z
    // wait they have to be divided into n equal pieces, so, each piece = x*y*z and k*piece =  vol
    
    if(((((w%n)*(h%n))%n)*(d%n))%n==0){
        ll wp = __gcd(n, w), nw = n/wp;
        ll hp = __gcd(nw, h), nh= nw/hp;
        ll dp = __gcd(nh, d), nd = nh/dp;

        if(nd ==1){
            cout<<wp-1<<" "<<hp-1<<" "<<dp-1<<endl;
        }else{
            cout<<0<<endl;
        }


    }else{
        cout<<-1<<endl;
    }

}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t=1;
    //cin>>t;
    
    while(t--){
        solve();
        
    }

    return 0;
}