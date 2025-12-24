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
    
    ll n;
    cin>>n;
    string s;
    cin>>s;

    int mx = 0, ans = 0;

    for(int i = 0; i< n;i++){
        if(s[i] == '1'){
            mx = max(mx, ans);
            ans = 0;
            
        }else{
            ans++;
        }
    }
    mx = max(mx,ans);

    int ends = 0;
    if(s[0]=='0' && s[n-1]=='0'){
        int temp = 0, temp2 = 0;
        forn(i,0,n){
            if(s[i]=='1')
                break;
            temp++;
        }
        forn(i,0,n){
            if(s[n-i-1]=='1')
                break;
            temp2++;
        }

        ends=temp+temp2;
    }
    mx = max(mx, ends);
    
    cout<<mx<<endl;

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