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
    ll a[n];
    forn(i,0,n) cin>>a[i];
    ll cnt = 0;
    map<pll, vll> m1,m2,m3;
    for (int i = 0; i < n-2; i++)
    {
        m1[{a[i+1],a[i+2]}].pb(a[i]);
        m2[{a[i],a[i+2]}].pb(a[i+1]);
        m3[{a[i],a[i+1]}].pb(a[i+2]);
    }

    for(auto i:m1){
        vll cur = i.second;
        map<ll,ll> mpp;
        int tot = cur.size();
        for (int j = 0; j < tot; j++)
        {
            mpp[cur[j]]++;
        }
        for(auto j:mpp){
            cnt+=j.second * (tot - j.second);
        }
    }
    for(auto i:m2){
        vll cur = i.second;
        map<ll,ll> mpp;
        int tot = cur.size();
        for (int j = 0; j < tot; j++)
        {
            mpp[cur[j]]++;
        }
        for(auto j:mpp){
            cnt+=j.second * (tot - j.second);
        }
    }
    for(auto i:m3){
        vll cur = i.second;
        map<ll,ll> mpp;
        int tot = cur.size();
        for (int j = 0; j < tot; j++)
        {
            mpp[cur[j]]++;
        }
        for(auto j:mpp){
            cnt+=j.second * (tot - j.second);
        }
    }
    cout<<cnt/2<<endl;
    
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