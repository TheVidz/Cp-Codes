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

const int INF = 1e9;
//const ll INF = 1e18;
const ll mod = 1000000007;
// const ll mod = 998244353;


void solve(){
	
	ll a,b,xk,yk,xq,yq;
    cin>>a>>b;
    cin>>xk>>yk;
    cin>>xq>>yq;
    int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};
    set<pair<int, int>> st1, st2;
        for(int j = 0; j < 4; j++){
            st1.insert({xk+dx[j]*a, yk+dy[j]*b});
            st2.insert({xq+dx[j]*a, yq+dy[j]*b});
            st1.insert({xk+dx[j]*b, yk+dy[j]*a});
            st2.insert({xq+dx[j]*b, yq+dy[j]*a});
        }
        int ans = 0;
        for(auto x : st1)
            if(st2.find(x) != st2.end())
                ans++;
        cout << ans << '\n';
    
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