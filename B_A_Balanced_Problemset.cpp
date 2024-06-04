#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb push_back 
#define min3(a, b, c) min(min(a, b), c)
#define max3(a, b, c) max(max(a, b), c)
#define all(v) v.begin(), v.end()
#define forn(i, k, n) for(int i = k; i < n; i++)

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
// CPP program to find the series with largest 
// GCD and sum equals to n 

// function to generate and print the sequence 
void print_sequence(int n, int k) 
{ 
   
    int b = n / k; 
  

    if (b == 0) { 
        cout << -1 << endl; 
  
    } else { 
 
        int r = 1; 
  
        
        for (int x = 1; x * x <= n; x++) { 
  
            if (n % x != 0) 
                continue; 
  
  
            if (x <= b && x > r) 
                r = x; 
  
            if (n / x <= b && n / x > r) 
                r = n / x; 
        } 
  
   
        cout<<r<<endl;
  

        
    } 
}

void solve(){
    
    ll n,k;
    cin>>n>>k;

    ll b = n / k; 
    if (b == 0) { 
        cout << -1 << endl; 
    } else { 
 
        ll r = 1; 
        for (ll x = 1; x * x <= n; x++) { 
  
            if (n % x != 0) 
                continue; 
  
  
            if (x <= b && x > r) 
                r = x; 
  
            if (n / x <= b && n / x > r) 
                r = n / x; 
        } 
  
   
        cout<<r<<endl;
  
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