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
    
    ll n,k;
    cin>>n>>k;

    vll a(2*n), mpp(n+1,0);

    forn(i,0,2*n){ cin>>a[i];}
    forn(i,0,n){
        mpp[a[i]]++;
    }
    k = 2*k;

    vll g0,g1,g2;
    
    forn(i,1,n+1){
        if(mpp[i]==0) 
            g0.pb(i);
        else if(mpp[i]==1)
            g1.pb(i);
        else
            g2.pb(i);
    }

    ll nu = 0;
    for(auto x:g2){
        if(nu<k){
            nu+=2;
            cout<<x<<" "<<x<<" ";
        }
    }
    
    for(auto x:g1){
        if(nu<k){
            nu+=1;
            cout<<x<<" ";
        }
    }

    cout<<endl;
    nu = 0;
    for(auto x:g0){
        if(nu<k){
            nu+=2;
            cout<<x<<" "<<x<<" ";
        }
    }
    
    for(auto x:g1){
        if(nu<k){
            nu+=1;
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