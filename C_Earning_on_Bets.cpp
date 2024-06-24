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


ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
 
ll lcm(vll numbers)
{
    return std::accumulate(numbers.begin(), numbers.end(), 1,
        [](ll x, ll y) { return (x * y) / gcd(x, y); });
}


void solve(){
    
    ll n;
    cin>>n;
    vll k(n);
    forn(i,0,n) cin>>k[i];

    ll L = lcm(k);
    vll ans(n);
    ll summ = 0;
    forn(i,0,n){

        ans[i] = L/k[i];
        summ+= L/k[i];
    }

    if(summ < L){
        forn(i,0,n){
            cout<<ans[i]<<" ";
        }
    }else{
        cout<<-1;
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