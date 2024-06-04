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
    ll a[m];
    forn(i,0,m) cin>>a[i];
    unordered_map<ll,ll> mpp;
    forn(i,0,m){
        mpp[a[i]] = 0ll;
    }
    forn(i,0,n){
        forn(j,0,m){
            ll temp;
            cin>>temp;
            mpp[a[j]]+=temp;
        }
    }
    bool ans = true;
    for(auto x:mpp){
        if(x.first > x.second){
            
            ans = false;
        }
    }
    if(ans){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
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