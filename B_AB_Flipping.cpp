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
    char s[2000005];
    s[n+1] = 'C';
	for (int i = 1; i <= n; ++i) cin >> s[i];
    int pt1=1,pt2=1, ans=0;
    while(s[pt1]=='B'){
        pt1++;
        pt2++;
    }
    while(pt1<=n){
        int cntA = 0, cntB = 0;
        while(s[pt2]=='A'){
            pt2++;
            cntA++;
        }
        while(s[pt2]=='B'){
            pt2++;
            cntB++;
        }
        if(s[pt2-1]=='B'){
            ans+=pt2-pt1-1;

        }
        if(cntB){
            pt1= pt2-1;
        }else{
            break;
        }

    }
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