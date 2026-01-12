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
    
   
    ll n,k;
    cin>>n>>k;

    if(k>n){
        cout<<-1<<endl;
        return;
    }

    ll mn = n, mx = n, time = 0;

    while(mn>0){
        if(mn==k||mx==k){
            cout<<time<<endl;
            return;
        }

        mn = mn/2;
        mx = (mx+1)/2;
        time++;

        if(mx<k) break;
    }

    cout<<-1<<endl;

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