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

//The only verdict is vengeance; a vendetta, held as a votive, not in vain, for the value and veracity of such shall one day vindicate the vigilant and the virtuous.


void solve(){
    
    // ll n;
    // cin>>n;
    // vll b(n), diff(n);
    // forn(i,0,n){
    //     cin>>b[i];
    // }
    // diff[0] = b[0];
    // forn(i,1,n){
    //     diff[i] = b[i] - b[i-1];
    // }

    // vll ans;
    // ans.push_back(1ll);
    // forn(i,1,n){
    //     if(diff[i]==diff[i-1]){
    //         ans.push_back(ans[ans.size()-1]);
    //     }else{
    //         ans.push_back(ans[ans.size()-1]+1);
    //     }
    // }
    // forn(i,0, ans.size()){
    //     cout<<ans[i]<<" ";
    // }
    // cout<<endl;
    ll n; cin >> n;
    vector<ll> b(n+1, 0);
    forn(i,1,n+1) 
        cin >> b[i];

    vector<ll> a(n+1, 0);
    int curr = 1;

    for (int i = 1; i <= n; ++i) {
        ll d = b[i] - b[i-1];
        int p = (int)(i - d); 
        if (p == 0) {
            a[i] = curr++;
        } else {
            a[i] = a[p];
        }
    }

    
    forn(i,1,n+1){
        cout<<a[i]<<" ";
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