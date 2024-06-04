#include <bits/stdc++.h>
using namespace std;

#define pb push_back 
#define all(v) v.begin(), v.end()
#define forn(i, k, n) for(int i = k; i < n; i++)

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

const int INF = 1e9;
const ll mod = 1000000007;

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}

void solve(){
    
    ll n;
    cin>>n;
    ll a[n];
    ll prim = 0;
    bool ans = true;
    forn(i,0,n){
        cin>>a[i];        
    }
    sort(a,a+n);
    int k = 1;
    while(k<n){
        if(a[k]%a[0]==0){
            k++;
        }else{
            break;
        }
    }
    forn(i,k,n){
                if(a[i]%a[0]!=0 && a[i]%a[k]!=0){
                    ans=false;
                }
            }
    if(ans){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
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