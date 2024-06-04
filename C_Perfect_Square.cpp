#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb push_back 
#define f first
#define s second 
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

const int InF = 1e9;
//const ll InF = 1e18;
const ll mod = 1000000007;
// const ll mod = 998244353;

void solve(){
	
	int n;
    cin>>n;
    char A[n][n];
    ll ans=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>A[i][j];
            
        }
        
    }


 for (int i = 0; 2*i < n ; i++) {
        for (int j = 0; 2*j < n ; j++) {
 
            
            ll elements[4]={A[i][j],A[n-j-1][i],A[j][n-i-1],A[n-i-1][n-j-1]};
            sort(elements,elements+4);
            for (int i = 0; i < 4; i++)
            {
                ans+=elements[3]-elements[i];
            }
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