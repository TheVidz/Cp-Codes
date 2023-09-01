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
const ll mod = 1000000007;x`x`
// const ll mod = 998244353;
#define MAXN 100000001


void solve(){
int n,m;
cin>>n>>m;
string s,t;
cin>>s>>t;
char last;
bool c=true;
for (int i = 0; i < n-1; i++)
{
    if(s[i]==s[i+1]){
        c=false;
        break;
    }
}
for (int i = 0; i < m-1; i++)
{
    if(t[i]==t[i+1]){
        c=false;
        break;
    }
}
if(s[n-2]==s[n-1]^(t[n-2]==t[n-1])){
    if(s[n-1]==t[n-1]){
        c=false;
    }
}

if(c){

}else{
    cout<<"NO"<<endl;
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