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
    
    ll n,l,r;
    cin>>n>>l>>r;
    ll a[n];
    forn(i,0,n) a[i] = i+1;
    while(l<r){
        ll temp = a[l-1];
        a[l-1] = a[r-1];
        a[r-1] = temp;
        l++;
        r--;
    }
    forn(i,0,n) cout<<a[i]<<" ";
    cout<<endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t=1;
    //cin>>t;

        while(t--) 
            solve();

        
        return 0;
    }