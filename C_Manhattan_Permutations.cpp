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
    
    if(k&1 || k > (n*n)/2){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
        vll a(n+1,0);
        forn(i,0,n+1) a[i] = i;
        if(k <= 2 * (n-1)){
            ll temp = a[1];
            a[1] = a[k/2 +1];
            a[(k/2)+1] = temp;
        }else{
            ll l = 1, r = n;
            while(k>0){
                if(k <= 2 * (r-l)){
                    ll temp = a[l];
                    a[l] = a[k/2 +l];
                    a[(k/2)+l] = temp;
                    break;
                }else{
                    ll temp = a[l];
                    a[l] = a[r];
                    a[r] = temp;
                    k-=2*(r-l);
                    l++;r--;
                }
            
            

            }
        
        }
        forn(i,1,n+1) cout<<a[i]<<" ";
        cout<<endl; 
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