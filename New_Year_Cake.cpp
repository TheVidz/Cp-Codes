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
    
    ll a,b;
    cin>>a>>b;
    
    ll h=0, type1= 0,type2 =0;       
    ll current_layer =1; 

    while(true){
        if (h % 2 == 0) {
            type1 += current_layer;
        } else {
            type2 += current_layer;
        }
        bool possible = (a>=type1 && b>=type2)||(a>=type2 && b>=type1);

        if (!possible) {
            break;
        }
        h++;
        current_layer *= 2;
    }
    
    cout<<h<<endl;

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