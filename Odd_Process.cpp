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
    sort(all(arr));

    int n_odd = 0, n_even = 0;
    vll odds, evens;
    for(int a:arr){
        if(a&1){
            n_odd++;
            odds.pb(a);
        }else{
            n_even++;
            evens.pb(a);
        }
    }
    sort(all(odds), greater<ll>());
    sort(all(evens), greater<ll>());
    // forn(i,1,n_even){
    //     evens[i] = evens[i] + evens[i-1];
    // }
    // for(auto a:evens){

    //     cout<<a<<" ";
    // }
    vll pref(n_even+ 1, 0);
    forn(i, 0, n_even) {
        pref[i+1] = pref[i] + evens[i];
    }
    if(n_odd == 0){
        forn(i,0,n){
            cout<<0<<" ";
        }
        cout<<endl;
        return;
    }
    int m = n_even;
    forn(k,1, n+1){
        int min_odd_need = 1;
        if(k-n_even > min_odd_need)
            min_odd_need = k-n_even;
        if(min_odd_need%2==0)
            min_odd_need++;
        
        if(k==1){
            cout<<odds[0]<<" ";
        }else if(min_odd_need>n_odd || min_odd_need >k){
            cout<<0<<" ";
        }else{
            cout<<odds[0] + pref[k-min_odd_need]<<" ";
        }
    }
    cout<<endl;

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