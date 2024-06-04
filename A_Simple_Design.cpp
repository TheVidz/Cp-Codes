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

int digitsum(ll y){
    int m;
while (y>0)
    {
        m=(m + y%10);
        y/=10;
    }
    return m;
}

void solve(){
	
    int x,k;
    cin>>x>>k;
    int m =0;
    int y=x;
    while(true){

        int z=y;
        while(z>0){
            m+=z%10;
            z/=10;
        }
        if(m%k==0){
            cout<<y<<endl;
            break;
        }else{
            m=0;
            z= y+1;
            y++;
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