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
    ll arr[n];
    forn(i,0,n) cin>>arr[i];
    
    vector<vector<ll>> freq(n+1);

    forn(i,0,n) {freq[arr[i]].push_back(i);}
    
    vll ans(n,0);
    ll curr = 1;
    forn(i,1,n+1){
        if((freq[i].size()%i)!=0){
            cout<<-1<<endl;
            return;
        }else{
        ll k = 0;
        while(k < freq[i].size()){
            forn(j,0,i){
                ans[freq[i][k]] = curr;
                k++;
            }
            curr++;
        }
        }
        
    }

    forn(i,0,n) cout<<ans[i]<<" ";
    cout<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--) 
        solve();

    return 0;
}