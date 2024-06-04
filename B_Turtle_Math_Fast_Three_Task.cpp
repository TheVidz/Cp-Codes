#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb push_back 
#define min3(a, b, c) min(min(a, b), c)
#define max3(a, b, c) max(max(a, b), c)
#define all(v) v.begin(), v.end()
#define forn(i, k, n) for(int i = k; i < n; i++)

typedef long long ll;
typedef double ld;
typedef long double lld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pii> vpi;
typedef vector<pll> vpl;

const int INF = 1e9;
//const ll INF = 1e18;
const ll mod = 1000000007;
// const ll mod = 998244353;


void solve(){
    
    ll n;
    cin>>n;
    ll a[n];
    ll sum = 0;
    ll md = 0,md2=0;
    forn(i,0,n) {
        cin>>a[i];
        sum+=a[i];
        if(a[i]%3==1)
            {md++;}else if(a[i]%3==2){md2++;}
        
        }
    if(sum%3==0){
        cout<<0<<endl;
    }else if(sum%3==2){
        cout<<1<<endl;
    }else if(sum%3==1){
        if(md==0){
            cout<<md2%3<<endl;
        }else{
            cout<<1<<endl;
        }
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