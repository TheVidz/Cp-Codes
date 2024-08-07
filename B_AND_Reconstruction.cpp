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
    ll b[n];
    forn(i,0,n-1) cin>>b[i];
    vector<ll> a(n,0);
    b[n-1] = 0;


    if(n==2){
        cout<<b[0]<<" "<<b[0]<<endl;
        return;
    }
    a[0] = b[0];
    int ans = 1;

    for(int i = 1; i< n; i++){
        
        a[i] = min(a[i-1],b[i-1])|b[i];

        if((a[i]&a[i-1])!=b[i-1]){
            ans = 0;
            break;
        }
        
    }

    if(!ans){
        
        cout<<-1;
    }else{
        for(auto x:a){
            cout<<x<<" ";
        }

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