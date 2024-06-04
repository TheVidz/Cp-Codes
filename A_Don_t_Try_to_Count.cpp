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

int isSubstring(string s1, string s2)
{
    // using find method to check if s1 is
    // a substring of s2
    if (s1.find(s2) != std::string::npos) {
    return 1;
}
    return 0;
}
void solve(){
	
	int n,m;
    cin>>n>>m;
    string x,s;
    cin>>x>>s;
    
    ll ans=0;

        while (!isSubstring(x,s)&&x.length()<=n*m)
        {
            ans++;
            x+=x;


        }
        if (isSubstring(x,s))
        {
            cout<<ans<<endl;
        }else{
            cout<<-1<<endl;
        }


    
    
    
}

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);



    int t=1;
    cin>>t;

    while(t--) {
    
    	solve();
    }
    
    return 0;
}