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
    
    ll n,a,b;
    cin>>n>>a>>b;
    if(a>=b){
        cout<<a*n<<endl;
    }else if(n < b - a){
        cout<<b*n - ((n*(n-1))/2)<<endl;
    }else{
        ll x = b-a;
        ll ans = max(b*x - ((x*(x-1))/2) + (n-x)*a , b*(x+1) - ((x*(x+1))/2) + (n-x-1)*a);
        cout<<ans<<endl;
    }
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