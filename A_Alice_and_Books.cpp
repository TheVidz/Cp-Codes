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
    vll a(n);


    ll mx = 0,mxi = -1;
    forn(i,0,n) {
        cin>>a[i];
        mx = max(mx,a[i]);
        if(mx==a[i])mxi = i;
    }
    if(mxi==n-1){
        mx = 0,mxi = -1;
    forn(i,0,n-1) {
        
        mx = max(mx,a[i]);
        if(mx==a[i])mxi = i;
    }
    cout<<a[n-1]+mx<<endl;
    }else{
        cout<<mx+a[n-1]<<endl;
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