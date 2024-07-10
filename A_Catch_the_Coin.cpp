#include <bits/stdc++.h>
using namespace std;

#define pb push_back 
#define all(v) v.begin(), v.end()
#define forn(i, k, n) for(int i = k; i < n; i++)
#define pyes cout<<"YES"<<endl;
#define pno cout<<"NO"<<endl;

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

const int INF = 1e9;
const ll mod = 1000000007;

void solve(){
    
    ll n;
    cin>>n;
    ll x[n],y[n];
    forn(i,0,n) cin>>x[i]>>y[i];
    
    forn(i,0,n){
        if(y[i]<=-2){
            pno;
        }else{
            pyes;
        }
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