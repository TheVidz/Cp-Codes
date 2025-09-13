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
    vector<ll> odds, evens;

    forn(i,0,n) {
        cin>>a[i];
        if(a[i]&1) 
            odds.push_back(a[i]);
        else 
            evens.push_back(a[i]); 
        }

sort(all(odds));
sort(all(evens));

ll ans = 0;
ll inlen = odds.size();


if(inlen>0){
ans += odds.back();
for(auto x:evens) ans+=x;
for(int i = (inlen)/2;i<inlen-1;i++) ans+= odds[i];

cout<<ans<<endl;
}else{
    cout<<0<<endl;
}

   
    

    
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