#include <bits/stdc++.h>
using namespace std;

#define pb push_back 
#define all(v) v.begin(), v.end()
#define forn(i, k, n) for(int i = k; i < n; i++)

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;

const int INF = 1e9;
const ll mod = 1000000007;

void solve(){
    
    ll n,t;
    cin>>n>>t;
    vll nods(n+1,-1);
    map<ll,ll> mpp;
    
    forn(i,0,n-1){
        int temp, x;
        cin>>temp>>x;
        mpp[temp] = x;
    }

    for(auto x = mpp.begin(); x!=mpp.end();x++){
        
        nods[x->first] = (x->second);
        
    }
    ll ans = 0;
    ll fron;
    cin>>fron;
    while(nods[fron]!=-1){
        fron = nods[fron];
        ans++;
    }
    ll back = n - ans - 1;

    if(ans%2!=0 || back%2!=0){
        cout<<"Ron"<<endl;
    }else if(ans%2==0 && back%2==0){
        cout<<"Hermione"<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t=1;
    //cin>>t;

        while(t--) 
            solve();

        
        return 0;
    }