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
    
    ll m,n;
    cin>>m>>n;
    char grid[m][n];
    forn(i,0,m){
        forn(j,0,n){
            cin>>grid[i][j];
        }
    }
    if(grid[0][0]==grid[m-1][n-1]||grid[m-1][0]==grid[0][n-1]){
        cout<<"YES"<<endl;
        return;
    }
    bool imp = 1;
    if(grid[0][0]==grid[0][n-1]){
        forn(j,0,n){
            if(grid[0][0]!=grid[0][j]){
                imp = 0;
                break;
            }
        }
    }

    if(grid[m-1][0]==grid[m-1][n-1]){
        forn(j,0,n){
            if(grid[m-1][0]!=grid[m-1][j]){
                imp = 0;
                break;
            }
        }
    }
    if(grid[0][0]==grid[m-1][0]){
        forn(i,0,m){
            if(grid[0][0]!=grid[i][0]){
                imp = 0;
                break;
            }
        }
    }
    if(grid[0][n-1]==grid[m-1][n-1]){
        forn(i,0,m){
            if(grid[0][n-1]!=grid[i][n-1]){
                imp = 0;
                break;
            }
        }
    }
    if(imp){
        cout<<"NO"<<endl;
    }else{
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