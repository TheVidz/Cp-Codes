#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define pb push_back 
#define all(v) v.begin(), v.end()
#define forn(i, k, n) for(ll i = k; i < n; i++)
#define pyes cout<<"YES"<<endl;return
#define pno cout<<"NO"<<endl;return


const int INF = 1e9;
const ll mod = 1000000007;

//The only verdict is vengeance; a vendetta, held as a votive, not in vain, for the value and veracity of such shall one day vindicate the vigilant and the virtuous.

void solve(){
    
    ll n;
    cin>>n;

    vector<int> ans;
    ans.push_back(n);
    
    vector<int> factors;
    
    for(int i = 2; i<=sqrt(n);i++){
        if(n%i==0){
            factors.push_back(i);
            factors.push_back(n/i);
        }
    }
    sort(all(factors), greater<int>());
    int it = 0;
    
    for(auto factor:factors){
        int y = 1;
        while(factor*y < n){
            ans.insert(ans.end()-it, factor*y);
            y++;
        } 
        it = y-1;
    }
    
    for(int i=1; i<n;i++){
        if(find(ans.begin(), ans.end(), i)==ans.end()){
            ans.push_back(i);
        }
    }
    for(auto x:ans) cout<<x<<" ";
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
            {
            solve();
            
}
        return 0;
}