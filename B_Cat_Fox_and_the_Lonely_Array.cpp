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

bool check(int k, ll v[], int n){
    vll bits(22,0);
    forn(i,0,k){
        int j=0;
        int x = v[i];
        while(x>0){
            if(x%2)
                bits[j]++;
            j++;
            x/=2;
        }
    }
    vll freq = bits;
    forn(i,k,n){
        int j=0;
        int x = v[i];
        while(x>0){
            if(x%2)
                freq[j]++;
            j++;
            x/=2;
        }
        j=0;
        x = v[i-k];
        while(x>0){
            if(x%2)
                freq[j]--;
            j++;
            x/=2;
        }
        forn(y,0,21){
            if(freq[y]>0&&bits[y]==0) return false;
            if(freq[y]==0&&bits[y]>0) return false;
        }
    }
    return true;
}
void solve(){
    
    ll n;
    cin>>n;
    ll a[n];
    forn(i,0,n) cin>>a[i];
    ll lo = 1, hi = n, ans =n;

    while(hi>=lo){
        ll mid = (lo+hi)/2;
        if(check(mid, a, n)){
            hi = mid-1;
            ans = mid;}
        else 
            lo = mid+1;
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