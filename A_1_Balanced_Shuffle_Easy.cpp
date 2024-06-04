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
bool comp(pll p1, pll p2){
    if(p1.first<p2.first) return true;
    if(p1.first>p2.first) return false;
    if(p1.second>p2.second) return true;
    if(p1.second<p2.second) return false;
    return false;
}

void solve(){
    
    string s;
    cin>>s;
    ll n = s.length();
    ll b = 0;
    vpl pos;
    forn(i,0,n){
        pos.pb({b,i});
        if(s[i]=='(')
            b++;
        else 
            b--;
    }
    sort(all(pos), comp);
    for(auto i:pos){
        cout<<s[i.second];
    }
    
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