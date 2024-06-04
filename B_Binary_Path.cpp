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
    string s1,s2;
    cin>>s1>>s2;
    string ans="";
    ll way = 1,i=0;
    bool fl=false;
    while(i<n){
        if(s1.find("0",i) > s2.find("0",i)){
            fl=true;
        if(s1[i+1]==s2[i]){
            way*=2;
        }

        
    }
    if(fl){ans+=s2[i];}
    else{
        
        ans= ans+s1[i];
    }
    i++;
    }
    ans+=s2[n-1];
    cout<<ans<<endl;
    cout<<way<<endl;
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