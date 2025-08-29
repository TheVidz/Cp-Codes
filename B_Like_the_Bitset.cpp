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
    string s;
    cin>>s;
    int a[n];
   
    forn(i,0,n){
        if(s[i] == '1'){
            a[i] = 1;
    }}

    ll cnt = 0, max_cnt = 0;
    forn(i,0,n) {
        if(a[i] == 1) cnt++;
        else cnt = 0;
        max_cnt = max(max_cnt, cnt);
    }
    if(max_cnt >= k) {cout<<"NO"<<endl;return;}
    else {cout<<"YES"<<endl;}
    ll p = 1, q = n;

    for(int i = 0;i<n;i++){
        if(a[i] == 1){
            cout<<p<<" ";
            p++;
        }else{
            cout<<q<<" ";
            q--;
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
