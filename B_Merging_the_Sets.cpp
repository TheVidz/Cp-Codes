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
    int n,m; 
    cin>>n>>m;
    vector<vi> sets(n);
    vector<int> cnt(m+1,0);
    forn(i,0,n){
        int l; cin>>l;
        sets[i].resize(l);
        forn(j,0,l){
            cin>>sets[i][j];
            cnt[sets[i][j]]++;
        }
    }
    for(int i=1;i<=m;i++){
        if(cnt[i]==0) {pno;}
    }
    int removable=0;
    forn(i,0,n){
        bool ok=true;
        for(int x: sets[i]){
            if(cnt[x]==1){ ok=false; break; }
        }
        if(ok) removable++;
    }
    if(removable>=2) {cout<<"YES"<<endl;}
    else {cout<<"NO"<<endl;}
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
