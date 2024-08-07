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
    
    ll n,s,m;
    cin>>n>>s>>m;
    int gap = 0, mx = 0;
    vector<int> diff;
    int l[n], r[n];
    forn(i,0,n){
        cin>>l[i]>>r[i];

    }
    diff.pb(l[0]);

    for (int i = 1; i < n; i++)
    {
        diff.pb(l[i] - r[i-1]);
    }
    //cout<<endl;
    diff.pb(m-r[n-1]);
    for(auto x:diff){
        //cout<<x<<endl;
        if(x>=s){
            pyes;
        }
    }
    pno;
    
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