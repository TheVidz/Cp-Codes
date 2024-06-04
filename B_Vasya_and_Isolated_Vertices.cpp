#include <bits/stdc++.h>
using namespace std;

#define pb push_back 
#define all(v) v.begin(), v.end()
#define forn(i, k, n) for(int i = k; i < n; i++)

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

const int INF = 1e9;
const ll mod = 1000000007;

void solve(){
    
    ll n,m,y, used=1;
    cin>>n>>m;
    y = m;
    while(y > 0){
        ll temp = min(used,y);
        y-=temp;
        used++;
    }
    ll ans = n;
    if(used > 1)    
        ans = n-used;
    cout<<max((ll)0,n-2*m)<<" "<<ans<<endl;
    
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t=1;
    //cin>>t;

        while(t--) 
            solve();

        
        return 0;
    }