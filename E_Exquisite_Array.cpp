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
const int N=2e5+5;
int a[N];
vector<int>mp[N];
set<int>s;
void solve(){
    
  int n;cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		for(int i=1;i<n;i++){
			a[i]=abs(a[i+1]-a[i]);
			mp[a[i]].push_back(i);
		}s.insert(0);s.insert(n);
		long long ans=1ll*n*(n-1)/2;
		for(int i=1;i<n;i++){
			cout<<ans<<' ';
			for(int j:mp[i]){
				auto nxt=s.lower_bound(j);
				auto pre=nxt;pre--;
				ans-=1ll*(j-*pre)*(*nxt-j);
				s.insert(j);
			}mp[i].clear();
		}cout<<'\n';s.clear();
    
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