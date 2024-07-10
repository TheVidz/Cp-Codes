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
    
    ll n,l,r;
    cin>>n>>l>>r;
    ll a[n];
    forn(i,0,n) cin>>a[i];
    ll p1 = 0, p2 = 0, smm=0,ans = 0;

    vll dp(n+1,-1);
    dp[0] = 0;

    while(p2<n+1){
        
        
        if(smm>=l && smm<=r){
            ans++;
            smm = 0;
        }else if(smm>r){
            smm = 0;
            p2++;
        }else if(smm<l & p2<n){
            smm+=a[p2];
            p2++;
        }
        
        
    }
    if(smm>=l&&smm<=r){
            
            ans++;
            smm = 0;
            p2++;
            p1 = p2;
        }
    cout<<ans<<endl;
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