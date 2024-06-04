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
    
    int n,k,m;
    cin>>n>>k>>m;
    string s;
    cin>>s;
    string res="";
    bool found[k];
    memset(found, false, sizeof(found));
    int count=0;
    for(char c:s){
        if(res.size()==n){
            break;
        }
        count+=(!found[c-'a']);
        found[c-'a'] = true;
        if(count==k){
            memset(found, false, sizeof(found));
                count=0;
                res+=c;
        }

    }

    if(res.size()==n){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;;
        for (int i = 0; i < k; i++)
        {
            if(!found[i]){
                while(res.size()<n){
                    res+=(char)('a'+i);
                }
            }
        }
        cout<<res<<endl;;
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