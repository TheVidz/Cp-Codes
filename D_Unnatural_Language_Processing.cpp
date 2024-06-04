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

bool isCons(char c){
    if(c=='b'||c=='c'||c=='d')
        return true;
    return false;
}

bool isVow(char c){
    if(c=='a'||c=='e')
        return true;
    return false;
}

void solve(){
	
	int n;
    cin>>n;
    char s[n];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    
    for (int i = 0; i < n-2; i++)
    {
        
        if(isVow(s[i])&&isCons(s[i+1])&&isVow(s[i+2])){
            cout<<s[i];
            cout<<'.';
            
        }else if(isCons(s[i])&&isCons(s[i+1])){

            cout<<s[i];
            cout<<'.';
        }else{
            cout<<s[i];
        }
        
    }

    cout<<s[n-2]<<s[n-1];
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