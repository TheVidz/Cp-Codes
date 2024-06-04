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
    vll a(n),b(n);
    forn(i,0,n) cin>>a[i];
    
    forn(i,0,n) cin>>b[i];

    ll m;
    cin>>m;
    vll d(m);
    bool ans = true;
    forn(i,0,m) cin>>d[i];
    vll finalb;
    vll finala;
    forn(i,0,n){
        if(a[i]!=b[i]){
            finalb.pb(b[i]);
            finala.pb(a[i]);
            
        }
    }

    for(int i = m-1; i>=0; i--){
        if(finalb.empty() && i <m-1){
            ans = true;
            break;
        }
        auto fina = find(all(b),d[i]);
        if(fina==b.end() ){
            ans = false;

            break;
        }else{
            auto need = find(all(finalb), d[i]);
            if(need!=finalb.end()){
                finalb.erase(need);
            }
        }
    }
    if(!ans|| (!finalb.empty())){
        
        cout<<"NO"<<endl;
        
        
    }else if(ans){
        cout<<"YES"<<endl;
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