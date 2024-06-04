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
    
    ll a,b,r;
    cin>>a>>b>>r;

    if(a < b)
		swap(a, b);
 
	int64_t ans = 0;
	bool check = false;
 
	for(int bits = 63; bits >= 0; --bits){
		int fa = (a >> bits) & 1;
		int fb = (b >> bits) & 1;
		int fr = (r >> bits) & 1;
 
		if(fa == fb){
			if(fr == 1)
				check = true;
			continue;
		}
 
		if(check){
			if(ans > 0)
				ans -= (1LL << bits);
			else ans += (1LL << bits);
 
			continue;
		}
 
		if(fr == 0){
			if(fa == 1)
				ans += (1LL << bits);
			else ans -= (1LL << bits);
 
			continue;
		}
 
		if(fr == 1){
			if(ans > 0){
				int use = fa;
				ans -= (1LL << bits);
 
				if(use == 0)
					check = true;
			} else{
				int use = fb;
				ans += (1LL << bits);
 
				if(use == 0)
					check = true;
			}
		}
	}
 
	cout << abs(ans) << endl;
    
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