

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
typedef unsigned long long int ull;

const int INF = 1e9;
const ll mod = 1000000007;

void solve(){

    ll n,m;
    cin>>n>>m;
    int a[n][m], b[n][m];
    ll x = 0, y = 0;
    forn(i,0,n){
        forn(j,0,m){
            char t1;
            cin>>t1;
            a[i][j] = t1-'0';
            x = (x+a[i][j])%3;
        }
    }
    forn(i,0,n){
        forn(j,0,m){
            char t2;
            cin>>t2;
            b[i][j] = t2-'0';
            y = (y+b[i][j])%3;
        }
    }
    int diff[n][m];
    int d= 0;
    forn(i,0,n){
        forn(j,0,m){
            diff[i][j] = abs(a[i][j] - b[i][j]);
            d+= diff[i][j];
            d%=3;          
        }
    }
    forn(i,0,n){
        forn(j,0,m){
            cout<<diff[i][j];
                    
        }
        cout<<endl;
    }

    cout<<d<<endl;
    if(d%3!=0){
        pno;
    }
    if(x%3==y%3){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    
}
int main() {
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt

    freopen("input1.txt", " r",stdin) ;
    // for writing output to output .txt
    freopen("output1.txt" , "w" , stdout);
    #endif

    int t=1;
    cin>>t;
    
    while(t--) 
            solve();
    return 0;
}

