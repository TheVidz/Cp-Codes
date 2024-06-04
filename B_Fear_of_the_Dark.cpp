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
	
    ll px,py,ax,ay,bx,by;
    cin>>px>>py>>ax>>ay>>bx>>by;
 
    double ab = sqrt(pow((ax - bx), 2) + pow((ay - by), 2));
    double w = ab / 2;
    double op = sqrt(pow(px, 2) + pow(py, 2));
    double oa = sqrt(pow(ax, 2) + pow(ay, 2));
    double pa = sqrt(pow(px - ax, 2) + pow(py - ay, 2));
    double ob = sqrt(pow(bx, 2) + pow(by, 2));
    double pb = sqrt(pow(px - bx, 2) + pow(py - by, 2));
    double w2 = min(max(oa, pa), max(ob, pb));
    if (min(oa,ob) <= w && min(pb, pa) <= w)
        {
 
            w = min(w2, w);
            cout << fixed << setprecision(10) << w << '\n';
        }
        else
        {
            double w3 = max(min(oa, ob), min(pa, pb));
            cout << fixed << setprecision(10) << min(w2, w3) << '\n';
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