#include <bits/stdc++.h>
using namespace std;

#define pb push_back 
#define all(v) v.begin(), v.end()
#define forn(i, k, n) for(int i = k; i < n; i++)
#define pyes cout<<"YES"<<endl;return
#define pno cout<<"NO"<<endl;return

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

const int INF = 1e9;
const ll mod = 1000000007;



void solve(){
    
    ll n;
    cin>>n;
    ll a[n],b[n];
    forn(i,0,n) cin>>a[i];
    forn(i,0,n) cin>>b[i];
    vector<vector<int>> dp(n, vector<int>(n,0));

    dp[0][0] = 1;
    dp[0][1] = 1;

    forn(i,1,n){
        if(a[i]>=b[i-1]&& b[i] >=a[i-1]){
            dp[i][1] += dp[i-1][0];
            dp[i][0] += dp[i-1][1];
            dp[i][1] %= 998244353;
dp[i][0] %= 998244353;
            

        }
        if(a[i]>=a[i-1]&& b[i]>=b[i-1]){
            dp[i][0] +=dp[i-1][0];
            dp[i][1] +=dp[i-1][1];
            dp[i][1] %= 998244353;
            dp[i][0] %= 998244353;
            
        }
        
    }
cout<<(dp[n-1][0]+dp[n-1][1])%998244353<<endl;


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t=1;
    cin>>t;
    
        while(t--) 
            solve();

        return 0;
}