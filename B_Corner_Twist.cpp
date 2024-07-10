#include <bits/stdc++.h>
using namespace std;

#define pb push_back 
#define all(v) v.begin(), v.end()
#define forn(i, k, n) for(int i = k; i < n; i++)
#define pyes cout<<"YES"<<endl
#define pno cout<<"NO"<<endl

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

const int INF = 1e9;
const ll mod = 1000000007;

void solve(){
    
    ll n,m;
    cin>>n>>m;
    ll a[n][m], b[n][m];
    ll x = 0, y = 0;
    forn(i,0,n){
        forn(j,0,m){
            cin>>a[i][j];
            x= (x+a[i][j])%3;
        }
    }
    forn(i,0,n){
        forn(j,0,m){
            cin>>b[i][j];
            y = (y+b[i][j])%3;
        }
    }
    if(x%3==y%3){
        pyes;
    }else{
        pno;
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