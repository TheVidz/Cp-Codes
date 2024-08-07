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
    
    ll a1,a2,b1,b2;
    cin>>a1>>a2>>b1>>b2;
    
int ans = 0;

    if((a1>b1&&a2>=b2)||(a1>=b1&&a2>b2)){
        ans++;  
    }

     if((a1>b2&&a2>=b1)||(a1>=b2&&a2>b1)){
        ans++;
    }
     if((a2>b1&&a1>=b2)||(a2>=b1&&a1>b2)){
        ans++;
    }
     if((a2>b2&&a1>=b1)||(a2>=b2&&a1>b1)){
        ans++;
    }
    cout<<ans<<endl;
    
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