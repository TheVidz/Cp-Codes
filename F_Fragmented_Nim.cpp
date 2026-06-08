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
    
    ll n;
    cin>>n;
    vll arr(n);
    ll ones = 0;
    forn(i,0,n){ 
        cin>>arr[i];
        if(arr[i]==1)
            ones++;
    }
    
    if(ones != n){

        if(ones&1){
            cout<<"Bob"<<endl;
        }else{
            cout<<"Alice"<<endl;
        }
    }else{
        if(ones&1){
            cout<<"Alice"<<endl;
        }else{
            cout<<"Bob"<<endl;
        }
    }
    // in first turn, bob chooses the pile that alice picks from
    // alice wins when: alice takes the last pile, which bob is forced to choose
    // bob wins when: bob takes the last pile...... ie. n = 1, turner wins
    // so the person which gets the last pile automatically picks it whole and wins,
    // so when two piles are left, the person whos turn it is, can pick ai - 1 and then he wins, so their opponent will make them pick pile with 1, thats only winning outcome
    // n = 2, turner wins if ai doesnt have "1", turner loses only if ai has 1
    // n = 3, if ai has 0 ones: turner picks ai-1, wins; has 1 one turner loses, or has 2 ones, turner wins, has 3 ones, turner wins
    // n = 4, if ai has 2 ones, turner wins
    // it seems that
    // in general it relates to if odd number of ones, turner loses, even number of ones, turner wins
    // except if all ones, even n, alice loses, odd n, alice wins
    
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