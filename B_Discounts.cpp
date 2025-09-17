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
    
    ll n,k;
    cin>>n>>k;
    vll a(n),b(k);
    ll total = 0;
    forn(i,0,n) {cin>>a[i];total+=a[i];}
    forn(i,0,k) cin>>b[i];
    
    sort(all(a), greater<long long>());
    

    ll disc = 0;
    
    ll l = 0;
sort(all(b));
    forn(i,0,k){
        ll idx = l+(b[i]-1);
        if(idx>=n) break;
        disc+=a[idx];
        l+=b[i];
        if(l>=n) break;
    }
    cout<<total-disc<<endl;
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