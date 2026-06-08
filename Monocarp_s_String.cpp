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
    ll n;
    cin>>n;
    string s;
    cin >> s;

    vector<int> pref(n+1,0);

    forn(i,0,n) 
        pref[i+1] = pref[i] + (s[i]=='a'?1:-1);

    int D = pref[n];
    if(D==0){
        cout<<0<<endl;
    return;}

    unordered_map<int,int> mp;
    mp.reserve(n*2);
    mp[0]=0;
    int ans=INF;
    forn(i,1,n+1){
        int need = pref[i]-D;
        if(mp.count(need)) ans=min(ans,i-mp[need]);
        if(!mp.count(pref[i])) mp[pref[i]]=i;
    }
    if(ans==INF || ans==n) cout<<-1<<endl;
    else cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}
