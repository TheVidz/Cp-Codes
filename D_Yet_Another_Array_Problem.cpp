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



//The only verdict is vengeance; a vendetta, held as a votive, not in vain, for the value and veracity of such shall one day vindicate the vigilant and the virtuous.


void solve(){
    
    ll n;
    cin>>n;
    vll a(n);
    forn(i,0,n) cin>>a[i];
    set<ll> vals;
    forn(i,0,n){
        vals.insert(a[i]);
    }
    ll res = -1;
    for(ll x = 2; x <= 1000000000; x++){
        forn(i,0,n){
            if(__gcd(a[i], x) == 1){
                res = x;
                break;
            }
        }
        if(res != -1) break;
    }
    if(res != -1){
        cout<<res<<endl;
        return;
    }
    cout<<-1<<endl;
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
