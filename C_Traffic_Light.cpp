#include <bits/stdc++.h>
using namespace std;

#define pb push_back 
#define all(v) v.begin(), v.end()
#define forn(i, k, n) for(int i = k; i < n; i++)

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

const int INF = 1e9;
const ll mod = 1000000007;

ll cross(char a[], ll x){

}

void solve(){
    
    ll n;
    char x;
    cin>>n>>x;
    char a[2*n];
    
    
    forn(i,0,n){
        cin>>a[i];
    }
    if(x=='g'){
        cout<<0<<endl;
    }else{
        forn(i,n,2*n){
        a[i] = a[i-n];
        }
        ll ans = 0, foun = -1;
        forn(i,0,2*n){
        if(a[i]==x&&foun==-1){
            foun = i;
        }else if(foun!=-1&&a[i]=='g'){
            ans = max(ans, i - foun);
            foun = -1;
        }
    }
    cout<<ans<<endl;
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