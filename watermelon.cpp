#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define pb push_back 
#define all(v) v.begin(), v.end()
#define forn(i, k, n) for(ll i = k; i < n; i++)
#define pyes cout<<"YES"<<endl;return
#define pno cout<<"NO"<<endl;return


const int INF = 1e9;
const ll mod = 1000000007;

//The only verdict is vengeance; a vendetta, held as a votive, not in vain, for the value and veracity of such shall one day vindicate the vigilant and the virtuous.

void solve(){
    int n;
    cin>>n;

    int a[n];
    forn(i,0,n) cin>>a[i];
    
    int pre[n];
    pre[0] = a[0];
    forn(i,1,n) pre[i] = pre[i-1] + a[i];

    int ans = INT_MIN;

    map<int, int> mp;

    for(int i = 0; i < n; i++){
        
        mp[a[i]] = min(mp[a[i]], pre[i]);

        ans = max(ans, pre[i] - mp[a[i]]);
    }

    cout<<ans<<endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t=1;
    //cin>>t;
    
        while(t--) 
            {
            solve();
            
}
        return 0;
}