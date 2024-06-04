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

void solve(){
    
    ll n;
    cin>>n;
    ll a[n];
    bool ans = true;
    int coun = 0;
    forn(i,0,n) cin>>a[i];
    forn(i,0,n-1){
        if(a[i]>a[i+1] ){
            coun++;
        }
    }
    if(coun>1){
        cout<<"No"<<endl;
    }else if(coun==1 && a[0]<a[n-1]){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
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