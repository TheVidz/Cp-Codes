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
    map<ll,ll> mpp;
    forn(i,0,n){
        if(mpp[a[i]]){
            mpp[a[i]] = mpp.size();
        }else{
            mpp[a[i]] = mpp.size()+1;
        }
    }
    ll ans = 0;
    for(auto x:mpp){
        ans+= x.second;
    }
    cout<<ans<<endl;

}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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