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

const int INF = 1e15;
const ll mod = 1000000007;
//The only verdict is vengeance; a vendetta, held as a votive, not in vain, for the value and veracity of such shall one day vindicate the vigilant and the virtuous.

ll coun(ll n, ll target){
    if(n == target) return 0;
    
    ll x = 0;
    ll temp = n;
    bool seen_one = false;
    int cycle_steps = 0;
    
    while(temp != target){
        if(temp == 1) seen_one = true;
        
        if(seen_one) {
            cycle_steps++;
            if(cycle_steps > 3) return INF; 
        }
        
        if(temp & 1){
            temp++;
        } else {
            temp /= 2;
        }
        x++;
    }
    return x;
}

void solve(){
    ll n;
    cin >> n;
    vll arr(n);
    forn(i, 0, n) cin >> arr[i];

    sort(all(arr));
    
    vll possible_targets;
    ll curr = arr[0];
    bool seen_one = false;
    int cycle_steps = 0;
    
    while(true){
        possible_targets.pb(curr);
        
        if(curr == 1) seen_one = true;
        if(seen_one) {
            cycle_steps++;
            if(cycle_steps > 3) break;
        }
        
        if(curr & 1) curr++;
        else curr /= 2;
    }
    
    ll final_ans = INF;

    for(ll target:possible_targets){
        ll current_cost = 0;
        bool valid_target = true;
        
        forn(i,0,n){
            ll cost = coun(arr[i], target);
            if(cost >=INF){
                valid_target=false; 
                break;
            }
            current_cost+=cost;
        }
        
        if(valid_target){
            final_ans = min(final_ans, current_cost);
        }
    }
    
    cout << final_ans<<endl;
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