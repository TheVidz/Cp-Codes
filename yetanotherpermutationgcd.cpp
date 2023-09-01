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

ll n;
cin>>n;

vector<int> ans;
ans.pb(1);

while (n>0)
{
    if (std::count(ans.begin(), ans.end(), n)==0){
            ans.pb(n);
        }
    int k =n;

    if(k%2==0){
        while (k>0)
    {
        if (std::count(ans.begin(), ans.end(), k)==0){
            ans.pb(k);
        }
        if (k%2==1)
        {
            break;
        }
        
        k/=2;
    }
    }
    
    
    n--;
}
for (int i : ans)
{
    cout<<i<<" ";
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
