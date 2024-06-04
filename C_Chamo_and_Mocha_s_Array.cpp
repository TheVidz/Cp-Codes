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
    
    ll n;
    cin>>n;
    vll a(n,0);
    
    forn(i,0,n) {
        cin>>a[i];
    }
    if(n==2){
        cout<<min(a[0],a[1])<<endl;
        return;
    }
    
    ll ans = -1;
    forn(i,0,n-2){
        vll temp(3,0);
        forn(k,0,3){
            temp[k] = a[i+k];
        }
        sort(all(temp));
        ans = max(ans, temp[1]);
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