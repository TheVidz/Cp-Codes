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
    
    ll n,m;
    cin>>n>>m;
    string s,c;
    ll ind[m];
    cin>>s;
    
    forn(i,0,m) cin>>ind[i];
    cin>>c;
    sort(ind,ind+m);
    sort(all(c));
    map<ll,ll> mpp;
    for(auto x:ind){
        mpp[x]++;
    }
    int i = 0;
    vi vis(m,-1);

    ll coun = m-1;

    while(i<m&&vis[i]!=1){
        vis[i] = 1;
        ll inn = mpp.begin()->first;
                while(mpp[inn]>1){
            vis[coun] = 1;
            coun--;
            mpp[inn]--;
        }
        
        s[inn-1] = c[i];
        mpp.erase(inn);
        i++;
    }
    cout<<s<<endl;
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