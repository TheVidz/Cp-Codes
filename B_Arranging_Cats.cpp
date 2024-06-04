#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb push_back 
#define min3(a, b, c) min(min(a, b), c)
#define max3(a, b, c) max(max(a, b), c)
#define all(v) v.begin(), v.end()


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

ll countSetBits(ll n)
{
    ll count = 0;
    while (n) {
        n &= (n - 1LL);
        count++;
    }
    return count;
}
    
void solve(){
    
    ll n;
    cin>>n;
    string s,f;
    cin>>s>>f;
    ll sones=0;
    ll fones=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='1')
            sones++;
        
        if(f[i]=='1')
            fones++;
    }
    
    ll ans = 0;
    ll ans2=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]!=f[i]){
            if(sones!=fones){
                ans++;
                if(min(sones,fones)==sones){
                    sones++;
                }else{
                    fones++;
                }

            }else{
                ans2++;
            }
            
        }
    }
    ans+=ans2/2;
    
    cout<<ans<<endl;
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