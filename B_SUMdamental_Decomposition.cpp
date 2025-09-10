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
    
    ll n,x;
    cin>>n>>x;
    ll ones = __builtin_popcount(x);
    if(n<=ones){
        cout<<x<<endl;
        return;
    }else{
        
           if(x>1){
            if((n-ones)%2==0)
            cout<<(x+n-ones)<<endl;
            else
            cout<<(x+n-ones+1)<<endl;
            return;
           } else if(x==1){
            if(n&1){
                cout<<n<<endl;
            }else{
                cout<<n+3<<endl;
            }
            return;
           }else if(x==0){
            if(n==1){
                cout<<-1<<endl;
                return;
            }
            if(n&1){
                cout<<n+3<<endl;
            }else{
                cout<<n<<endl;
            }
            return;
           }
           
           }
        
        
    

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
