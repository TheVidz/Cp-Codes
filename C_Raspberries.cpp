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
	
	int n,k;
    cin>>n>>k;
    int a[n];
    ll p=1;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        p *= a[i]%k;
        p%=k;
        a[i]%=k;
    }
    if(p==0){cout<<0<<endl;return;}

    if(k==2){
        cout<<1<<endl;
        return;
    }
    if(k==4){
        if(p==2&&n>1){
            cout<<1<<endl;
        }else if(std::find(a, a + n, 3) != a + n){cout<<1<<endl;}else if(p==1&&n>1){cout<<2<<endl;}else{cout<<4-p<<endl;} 
        return;
    }
    cout<<k-*max_element(a,a+n)<<endl;
    

    

    
    
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