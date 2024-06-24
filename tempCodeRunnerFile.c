#include <bits/stdc++.h>
using namespace std;

#define pb push_back 
#define all(v) v.begin(), v.end()
#define forn(i, k, n) for(int i = k; i < n; i++)
#define pyes cout<<"YES"<<endl;return
#define pno cout<<"NO"<<endl;return

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

const int INF = 1e9;
const ll mod = 1000000007;

void solve(){
    
    ll n;
    cin>>n;
    ll a[n];
    forn(i,0,n) cin>>a[i];
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    vector<ll> arr = {1,2,3,42,55,60};
    int k = 42;
    int lo = 0, hi = n-1;
    while(hi-lo>0){
        int mid = (lo + hi)/2;
        if(arr[mid]==k){
            break;
        }else if(arr[mid]>k){
            hi = mid - 1;
        }else{
            lo = mid+1;
        }
    }
    cout<<arr[lo]<<endl;

        return 0;
}