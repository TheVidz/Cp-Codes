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
const ll mod = 998244353;
//The only verdict is vengeance; a vendetta, held as a votive, not in vain, for the value and veracity of such shall one day vindicate the vigilant and the virtuous.
long long fact[60];

void precompute() {
    fact[0] = 1;
    for(int i=1; i<=55; i++) {
        fact[i] = (fact[i-1] * i) % mod;
    }
}

ll power(long long base, long long exp) {
    long long res = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2==1) res = (res*base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

ll modInverse(long long n) {
    return power(n, mod - 2);
}

ll nCr(int n, int r) {
    if (r < 0||r>n) return 0;
    return fact[n] * modInverse((fact[r]*fact[n-r])%mod)% mod;
}


void solve(){
    
    ll n;
    cin>>n;
    vll arr(n+1);
    ll tot = 0;
    forn(i,0,n+1) {cin>>arr[i];tot+=arr[i];}

    
    ll rem = tot%n, quo = tot/n;
    ll left = 0, right = 0;
    // in the last turn, rem contains left, rest on right
    forn(i,1,n+1){
        if(arr[i]> quo +1){
            cout<<0<<endl;
            return;
        }
        if(arr[i]==quo+1){
            left++;
        }else{
            right++;
        }
    }
    if(left > rem){
        cout<<0<<endl;
        return;
    }
    // now left ones must be put in first "rem" spots, rest of these, ie, rem - left must be chosen from right, nCr(right, rem - left), then permute rem! and (n-rem)!
    ll ans = (nCr(right, rem - left)*fact[rem])%mod;
    ans = (ans*fact[n-rem])%mod;

    cout<<ans<<endl;

}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t=1;
    cin>>t;
    precompute();
    while(t--){
        solve();
        
    }

    return 0;
}