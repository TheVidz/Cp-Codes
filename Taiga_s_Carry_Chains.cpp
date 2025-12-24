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
    ll n, k;
    cin >> n >> k;
    
    ll max_score = 0;
    if(k==1){
        int len = -1;

        forn(i,0,100){
            int sz = 0;
            while(n&1==0){
                n = n>>1;
            }
            while(n&1){
                sz++;
                n = n>>1;
            }
            len = max(len, sz);
        }
        
        cout<<"br"<<len<<endl;
        return;
    }
    forn(i, 0, 63) {
        unsigned long long mask = (1ULL << i) - 1;
        unsigned long long n_suffix = n & mask;
        unsigned long long L = (mask + 1 - n_suffix) & mask;
        
        unsigned long long X;
        unsigned long long k_suffix = k & mask;
        unsigned long long k_high = k & ~mask;
        
        if (k_suffix <= L) {
            X = k_high | L;
        } else {
            X = (k_high + (1ULL << i)) | L;
        }
        
        if (__builtin_popcountll(X) <= k) {
            unsigned long long sum = n + X;
            ll current_score = __builtin_popcountll(n) + k - __builtin_popcountll(sum);
            max_score = max(max_score, current_score);
        }
    }
    
    cout << max_score << endl;
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