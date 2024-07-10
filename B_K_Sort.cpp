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
    
    ll n;
    cin>>n;
    ll a[n];
    forn(i,0,n) cin>>a[i];
    vll diff;
    ll mx = a[0];
    forn(i,0,n){
        if(a[i]<mx){
            diff.pb(mx-a[i]);
        }else{
            mx = a[i];
        }

        
        
    }
    sort(all(diff));
    
    
    if(diff.size()>0){
        ll ans = 0, last = 0;
        
        for(int i = 0; i<diff.size();i++){
            
            ans += (diff.size() - i +1)*(diff[i]-last);
           
            last = diff[i];
        }
 
        cout<<ans;
    }else{
        cout<<0;
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