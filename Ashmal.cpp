#include <bits/stdc++.h>
using namespace std;

#define pb push_back 
#define all(v) v.begin(), v.end()
#define forn(i, k, n) for(ll i = k; i < n; i++)
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
    
    int n;
    cin>>n;
    vector<string> arr1(n), arr2(n);
    forn(i,0,n) cin>>arr1[i];

    string ans = arr1[0], curr = arr1[0];

    forn(i,1,n){
        if(curr > arr1[i]){
            ans = arr1[i] + ans;
            curr = ans;
        }else{
            ans = ans + arr1[i];
        }
    }
    cout<<ans<<endl;

}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t=1;
    cin>>t;
    
    while(t--){
        solve();
        
    }

    return 0;
}