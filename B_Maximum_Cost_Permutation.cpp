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
    ll arr[n];
    forn(i,0,n) {cin>>arr[i];}

    ll L = -1, R = -1, fz = -1, lz = -1;

    forn(i,0,n){
        if(arr[i]==0){
            fz = i;
            break;
        }
    }
    for(int i = n-1;i>=0;i--){
        if(arr[i]==0){
            lz = i;
            break;
        }
    }
    forn(i,0,n){
        if(arr[i]!=i+1 &&arr[i]!=0){
            L = i;
            break;  
        }
    }
    for(int i = n-1;i>=0;i--){
        if(arr[i]!=i+1&& arr[i]!=0){
            R = i;
            break;
        }
    }
    
    int zeros = 0;
    forn(i,0,n){
        if(arr[i]==0) zeros++;
    }
    
    if(zeros==1){
        ll xor1 = 0, xor2 = 0;
        forn(i,1,n+1){
            xor1 ^=i;
        }
        forn(i,0,n)
            xor2 ^=arr[i];
        ll missing = xor1^xor2;

        forn(i,0,n){
            if(arr[i]==0){
                
                arr[i] = missing;
                break;
            }
        }

        
        forn(i,0,n){
        if(arr[i]!=i+1 &&arr[i]!=0){
            L = i;
            break;  
        }
    }
    for(int i = n-1;i>=0;i--){
        if(arr[i]!=i+1&& arr[i]!=0){
            R = i;
            break;
        }
    }
    if(R==-1||L==-1){
        cout<<0<<endl;return;
        
    }
    cout<<(R-L+1)<<endl;
    return;
    }

   


    if(R==-1||L==-1){
        if(zeros<=1) {cout<<0<<endl;return;}
        else 
        cout<<lz-fz+1<<endl;
    }else

    cout<<(max(lz,R)-min(fz,L)+1)<<endl;
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