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

vector<vector<ll>> dp(65, vector<ll>(65,-1));


ll nCr(ll n, ll r){
    if(dp[n][r]!=-1){
        return dp[n][r];
    }
double sum = 1;

    // Calculate the value of n choose
    // r using the binomial coefficient formula
    for (int i = 1; i <= r; i++){
        
        sum = sum * (n - r + i) / i;
    }
    return dp[n][r] = (ll)sum;
}
void solve(){
    
   
    ll n,k;
    cin>>n>>k;
    // for any num, moves = length + ones - 1, now we can check for all nums upto n
    ll d = (ll)(floor(log2(abs(n))));
    // 10000100
    // length-1 C (ones-1) gives number of poss
    
    ll ans = 0;

    forn(i,1,d+1){
        // i is the length 
        ll max_j = k - i;

        if(max_j<0) continue;

        for(ll j = 0; j <= i-1 && j<=max_j;j++){
            if(dp[i-1][j]!=-1){
                ans+=dp[i-1][j];
            }else{
                ans+= nCr(i-1, j);
            }
        }
    }

    if(d+1<=k)
        ans++;
    // forn(i,1,n+1){
    //     int length = (int)(floor(log2(abs(i)))) + 1;
    //     int ones = __builtin_popcount(i);

    //     if((length + ones - 1)<=k){
    //         ans++;
    //     }
    // }

    cout<<max(0ll,n-ans)<<endl;
   

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