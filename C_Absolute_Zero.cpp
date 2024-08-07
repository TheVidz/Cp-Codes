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
    vll a(n);
    forn(i,0,n) cin>>a[i];
    
    if(n==1){
        cout<<1<<endl;
        cout<<a[0]<<endl;
        return;
    }

    ll mx = *max_element(all(a)),mn = *min_element(all(a)),it;
    vll ans;
    bool poss = 0;
int coun = 0;
for (int i = 0; i < n; i++)
        {
            if(a[i]==0){
                coun++;
            }
        }
        if(coun==n){
            
            poss = 1;
            
        }
if(poss){
        cout<<ans.size()<<endl;
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
        return;
    }else{

        
    }

    for(it = 0; it<40;it++){
        ll x = (mx+mn)/2;
        ans.pb(x);
        if(x==0) {poss = 0;break;}
        //cout<<mn<<" "<<mx<<it<<" "<<x<<endl;
        for(int j = 0; j<n;j++){
                a[j] = abs(a[j]-x);
        }
        mx = *max_element(all(a));
        mn = *min_element(all(a));
        coun = 0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]==0){
                coun++;
            }
        }
        if(coun==n){
            
            poss = 1;
            break;
        }
        
    }

    if(poss){
        cout<<ans.size()<<endl;
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
    }else{
        cout<<-1<<endl;
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