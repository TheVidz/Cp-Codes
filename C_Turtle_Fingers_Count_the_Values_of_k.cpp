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
    
    ll a,b,l;
    cin>>a>>b>>l;
    ll x=0,y=0;

    ll lcopy = l;
    while(l%a==0){
        l/=a;
        x++;
    }
    l = lcopy;
    while(l%b==0){
        l/=b;
        y++;
    }
    l = lcopy;
    set<ll> st;

    ll num;
    ll ax=1,bx=1;

    for(int i=0;i<=x;i++){
        bx = 1;
        for(int j=0;j<=y;j++){
            num = ax*bx;
            if(num>l) break;

            if((l%num)==0) st.insert(l/num);
            
            
            bx*=b;
        }
        ax*=a;
    }

    cout<<st.size()<<endl;
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