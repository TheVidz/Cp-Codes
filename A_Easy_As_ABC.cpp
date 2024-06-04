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
    char s[111];
    forn(i,0,27)cin>>s[i];
    
    
    string t="CCC",l;
	for(int i=0; i<9; i++)
	{
		for(int j=0; j<9; j++)
		{
			for(int k=0; k<9; k++)
			{
				if(i!=j&&j!=k&&k!=i&&(abs(i/3-j/3)<=1&&abs(i%3-j%3)<=1)&&(abs(j/3-k/3)<=1&&abs(j%3-k%3)<=1))
				{
					l=s[i]; l+=s[j]; l+=s[k]; t=min(t,l);
				}
			}
		}
	}
	cout<<t<<endl;

    
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