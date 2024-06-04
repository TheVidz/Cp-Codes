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
	
	int a,b,c;
    cin>>a>>b>>c;
    int x=max({a,b,c});
    int arr[3]={a,b,c},y[3]={0,0,0};
    if(a%2==b%2&&b%2==c%2){
        cout<<"1 1 1"<<endl;
    }else if(a%2==b%2&&b%2!=c%2){
        cout<<"0 0 1"<<endl;
    }else if(a%2!=b%2&&b%2==c%2){
        cout<<"1 0 0"<<endl;
    }else if(a%2==c%2&&b%2!=c%2){
        cout<<"0 1 0"<<endl;
    }else{
        for (int i = 0; i < 3; i++)
        {
            if(arr[i]==x){
                y[i]=1;
            }
        }
        for (int i = 0; i < 3; i++)
    {
        cout<<y[i]<<" ";
    }
    cout<<endl;
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