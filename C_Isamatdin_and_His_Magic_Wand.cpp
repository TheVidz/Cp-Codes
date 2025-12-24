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
    int n;
    cin>>n;

    int arr[n], dup[n];
    bool allOdd = true, allEven = true;
    for(int i = 0;i<n;i++) {cin>>arr[i];
    dup[i] = arr[i];
    if(arr[i]&1){
        allEven = false;
    }else{
        allOdd = false;
    }}
    sort(dup, dup+n);

    if(allEven || allOdd){
        for(int i = 0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }else{
        for(int i = 0;i<n;i++){
            cout<<dup[i]<<" ";
        }
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