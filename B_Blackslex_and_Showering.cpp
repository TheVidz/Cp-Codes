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

void solve(){
    
    int n;
    cin>>n;
    vll a(n);
    forn(i,0,n) cin>>a[i];

    ll total_sum = 0;
    for (int i = 0; i <n-1; i++) {
        total_sum +=abs(a[i+1]- a[i]);
    }

    ll max_reduction = 0;
    max_reduction = max(max_reduction, abs(a[1] - a[0]));

    max_reduction = max(max_reduction, abs(a[n-1] - a[n-2]));

    for (int i = 1; i < n - 1; i++) {
        ll current_segments = abs(a[i] - a[i-1]) +abs(a[i+1] - a[i]);
        ll bridged_segment = abs(a[i+1] -a[i-1]);
        ll reduction = current_segments -bridged_segment;
        max_reduction = max(max_reduction,reduction);
    }
    cout <<total_sum- max_reduction <<endl;
    

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