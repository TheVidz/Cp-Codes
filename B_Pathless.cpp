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
    
    ll n, s;
    cin>>n>>s;
    ll a[n], count[3] = {0};
    ll totalsum = 0;
    forn(i,0,n){ 
        
        cin>>a[i];
        count[a[i]]++;
        totalsum += a[i];
    }

    if(s<totalsum || (s== totalsum+1)){
        forn(i,0,count[0]) cout<<0<<" ";
        forn(i,0,count[2]) cout<<2<<" ";
        forn(i,0,count[1]) cout<<1<<" ";
        cout<<endl;
    }else{
        cout<<-1<<endl;
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