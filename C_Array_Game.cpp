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
    vector<ll> a(n);
    forn(i,0,n){
        cin>>a[i];
    }
    if(k>=3){
        cout<<0<<endl;
    }
    else if(k==1){
        sort(all(a));
        ll diff[n-1];
        forn(i,0,n-1) diff[i] = a[i+1] - a[i];
        cout<<min(a[0], *min_element(all(a)))<<endl;
    }
    else if(k==2){
        sort(all(a));
        ll ans = a[0];
        for (int i = 0; i < n - 1; i++) ans = min(ans, a[i + 1] - a[i]);
        forn(i,0,n){
         for (int j = 0; j < i; j++) {
            ll v = a[i] - a[j];
            ll p = lower_bound(a.begin(),a.end(), v) - a.begin();
            if (p < n) ans = min(ans, a[p] - v);
            if (p > 0) ans = min(ans, v - a[p - 1]);
            
        }
        }
        cout<<ans<<"\n";
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