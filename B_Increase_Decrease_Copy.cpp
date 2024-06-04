#include <bits/stdc++.h>
using namespace std;

#define pb push_back 
#define all(v) v.begin(), v.end()
#define forn(i, k, n) for(int i = k; i < n; i++)

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

const int INF = 1e10;
const ll mod = 1000000007;

void solve(){
    ll n;
    cin>>n;
    vll a(n), b(n+1);
    
    forn(i,0,n) cin>>a[i];
    forn(i,0,n+1) cin>>b[i];
    
    ll cool = INF;
    forn(i,0,n){
        if(cool==0) break;
        if((b[n]>=a[i]&& b[n]<=b[i])||(b[n]<=a[i]&& b[n]>=b[i])){
            cool = 0;
        }
        cool = min(cool, min(abs(b[n]-b[i]), abs(b[n]-a[i])));
    }

    ll ans = cool +1;
    forn(i,0,n){
        ans+=abs(a[i]-b[i]);
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