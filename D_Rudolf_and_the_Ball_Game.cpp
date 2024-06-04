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
    
    ll n,m,x;
    cin>>n>>m>>x;
    set<ll> s1,s2;
    s1.insert(x);
    forn(i,0,m){
        s2.clear();
        ll r;
        char ch;
        cin>>r>>ch;
        for(auto p:s1){
            if(ch=='0'){
                ll num = (p+r)%n;
                if(num>0) 
                    s2.insert(num);
                else 
                    s2.insert(n);
            }else if(ch=='1'){
                ll num = (p+n-r)%n;
                if(num>0) 
                    s2.insert(num);
                else 
                    s2.insert(n);
            }else if(ch=='?'){
                ll num = (p+r)%n;
                if(num>0) 
                    s2.insert(num);
                else 
                    s2.insert(n);

                ll num2 = (p+n-r)%n;
                if(num2>0) 
                    s2.insert(num2);
                else 
                    s2.insert(n);
            }
        }
        s1 = s2;
    }
    cout<<s1.size()<<endl;
    for(auto it:s1){
        cout<<it<<" ";
    }
    cout<<endl;

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