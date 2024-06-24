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
    char a[n][m];
    ll mx1 = 0, x1 = -1; 
    forn(i,0,n) {
        ll temp = 0;
        forn(j,0,m){
            cin>>a[i][j];
            if(a[i][j]=='#'){
                temp++;
            }
        }
        mx1 = max(temp,mx1);
        if(mx1==temp){
            x1 = i;
        }
    }

    ll my1 = 0, y1 = -1; 
    forn(i,0,m) {
        ll temp = 0;
        forn(j,0,n){
            
            if(a[j][i]=='#'){
                temp++;
            }
        }
        my1 = max(temp,my1);
        if(my1==temp){
            y1 = i;
        }
    }
    cout<<x1+1<<" "<<y1+1<<endl;
    
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