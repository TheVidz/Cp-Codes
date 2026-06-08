#include <bits/stdc++.h>
using namespace std;

#define pb push_back 
#define all(v) v.begin(), v.end()
#define forn(i, k, n) for(ll i = k; i < n; i++)
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
    vll arr(n);
    forn(i,0,n) cin>>arr[i];
    
    
    ll D_min;
    ll a1_final, an_final;
    
    if(arr[0] != -1 && arr[n-1] != -1){
        
        D_min = abs(arr[n-1] - arr[0]);
        a1_final = arr[0];
        an_final = arr[n-1];
        
    } else if (arr[0] != -1 && arr[n-1] == -1){
        D_min = 0;
        a1_final = arr[0];
        an_final = a1_final;
    } else if (arr[0] == -1 && arr[n-1] != -1){
        D_min = 0;
        an_final = arr[n-1];
        a1_final = an_final;
    } else {
        D_min = 0;
        a1_final = 0;
        an_final = 0;
    }
    
    cout << D_min << endl;
    
    arr[0] = a1_final;
    arr[n-1] = an_final;
    
    forn(i, 1, n-1){
        if(arr[i] == -1){
            arr[i] = 0;
        }
    }
    
    forn(i, 0, n){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t=1;
    cin>>t;
    
        while(t--) 
            {
            solve();
            
}
        return 0;
}