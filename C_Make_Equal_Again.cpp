#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb push_back 
#define min3(a, b, c) min(min(a, b), c)
#define max3(a, b, c) max(max(a, b), c)
#define all(v) v.begin(), v.end()
#define forn(i, k, n) for(int i = k; i < n; i++)

typedef long long ll;
typedef double ld;
typedef long double lld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pii> vpi;
typedef vector<pll> vpl;

const int INF = 1e9;
//const ll INF = 1e18;
const ll mod = 1000000007;
// const ll mod = 998244353;


void solve(){
    
    ll n;
    cin>>n;
    ll a[n];
    ll ans = 1e9;
    forn(i,0,n) {cin>>a[i];}
    ll l=0, r = n -1;
    while(l<r){
        if(a[l+1] == a[l]){
            l++;
        }else if(a[r-1]==a[r]&&a[l]==a[r]){
            r--;
        }else{
            break;
        }
    }
    if(r-l-1<0){ans=0;}else if(a[l] == a[r] ){
            ans=r-l-1;
 
        }else{ans=r-l;}
    ll x=0, y = n -1;
    while(x<y){
        if(a[y-1] == a[y]){
            y--;
        }else if(a[x+1]==a[x]&&a[x]==a[y]){
            x++;
        }else{
            break;
        }
    }
    if(y-x-1<0){ans=0;}else if(a[x] == a[y] ){
            ans=min(ans,y-x-1);
 
        }else{ans=min(ans,y-x);}
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