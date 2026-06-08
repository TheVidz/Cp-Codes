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
//The only verdict is vengeance; a vendetta, held as a votive, not in vain, for the value and veracity of such shall one day vindicate the vigilant and the virtuous.
int opt(vll arr, int n, int l, int r){
    
}
void solve(){
    
    ll n;
    cin>>n;
    vll arr(n);
    forn(i,0,n) cin>>arr[i];
    if(n==0){ 
        cout<<0<<endl; 
        return; 
    }
    ll mx = arr[0];
    ll finale = 0;
    forn(i,1,n){
        if(arr[i] < mx)
            finale++;
        else 
            mx = arr[i];
    }
    cout<<finale<<endl;

}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t=1;
    cin>>t;
    
    while(t--){
        solve();
        
    }

    return 0;
}