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
    ll arr[n];
    ll pre[n];
    forn(i,0,n) {cin>>arr[i];
    pre[i]= 0;}
    pre[0] = arr[0];
    forn(i,1,n) {pre[i] = pre[i-1] + arr[i];}
    // forn(i,0,n) cout<<pre[i]<<" ";
//cout<<endl;
    for(int l = 0; l<n;l++){
        

        for(int r = l+1;r<n;r++){
            ll s1 = pre[l]%3;
            ll s2 = (pre[r] - pre[l])%3;
            ll s3 = (pre[n-1] - pre[r])%3;
            if((s1==s2&&s2==s3)||(s1!=s2&&s2!=s3&&s3!=s1)){
                cout<<l+1<<" "<<r+1<<endl;
                return;
            }
        }
    }

    cout<<"0 0"<<endl;
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