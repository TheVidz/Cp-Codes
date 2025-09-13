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
    vector<ll> a(n);
    forn(i,0,n) cin>>a[i];
    map<int,int>mp;
    forn(i,0,n)
        mp[a[i]]++;
    vector<int>traps(n+1,0);
    for(auto i:mp){
        for(int j=i.first;j<=n;j+=i.first){
            traps[j]+=i.second;
        }
    }
    cout<<*max_element(traps.begin(),traps.end())<<"\n";
    
    
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