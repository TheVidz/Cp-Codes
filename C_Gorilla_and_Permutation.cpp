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
    
    ll n,m,k;
    cin>>n>>m>>k;
    ll a[n];
    forn(i,0,n){
        if(i<=n-k){
            a[i] = n - i;
        }else if(i>=n-m){
            a[i] =  i -n + m + 1;
        }else{
            a[i] = n -i;
        }
    }
    forn(i,0,n){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
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