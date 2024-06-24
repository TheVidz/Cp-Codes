#include <bits/stdc++.h>
using namespace std;

#define pb push_back 
#define all(v) v.begin(), v.end()
#define forn(i, k, n) for(int i = k; i < n; i++)

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

const int INF = 1e9;
const ll mod = 1000000007;

void solve(){
    
    ll n,k;
    cin>>n>>k;
    if(n==1){
        cout<<k<<endl;
    }else{
        ll x = 1;
        ll temp = k;
        while(temp>>=1){
            x++;
        }
        x--;
        ll a1 = (1<<x) -1;
        cout<<a1<<" "<<k-a1<<" ";
        forn(i,0,n-2){
            cout<<0<<" ";
        }
        cout<<endl;
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