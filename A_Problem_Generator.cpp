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
    
    ll n,m;
    cin>>n>>m;
    char a[n];
    
    map<char, ll> mpp;
    forn(i,0,7){
    mpp['A'+i] = 0;
}
forn(i,0,n) {
    cin>>a[i];
    mpp[a[i]]++;
    }
    ll ans = 0;
    for(auto i = mpp.begin(); i != mpp.end(); i++){
        if(i->second < m){
            ans += m - i->second;
        }
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