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

int binarySearch(vi arr, int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        if (arr[m] == x)
            return m;
 
        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;
 
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
 
    // If we reach here, then element was not present
    return -1;
}

void solve(){
    
    ll n;
    cin>>n;
    int a[n];
    vector<int> diff;
    int curr=-1;
    forn(i,0,n){
        cin>>a[i];
        if(curr!=a[i]){
            diff.push_back(i);
            curr=a[i];
        }else if(curr==-1){
            curr=a[i];
        }
    }
    
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        int idx = lower_bound(all(diff),l) - diff.begin();
        if(idx==diff.size()||diff[idx]>=r){
            cout<<-1<<" "<<-1<<endl;
        }else{  
            cout<<diff[idx]<<" "<<diff[idx]+1<<endl;
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