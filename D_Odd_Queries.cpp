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
	
	int n,q;
    cin>>n>>q;
    ll a[n],b[n];
    ll cum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        cum+=a[i];
        b[i]=cum;
    }
    for (int i = 0; i < q; i++)
    {
        ll l,r,k;
        cin>>l>>r>>k;
        if(l>1&&r<n){
            if((b[l-2]+k*(r-l+1)-b[r-1]+b[n-1])%2==1){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else if(l>1){
            if((b[l-2]+k*(r-l+1))%2==1){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else if(r<n){
            if((k*(r-l+1)-b[r-1]+b[n-1])%2==1){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            if((k*(r-l+1))%2==1){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }

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