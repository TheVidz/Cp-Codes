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

void solve(){
    
    ll n;
    cin>>n;
    vll x(32,0);
    
    int i =0;
    while(i<32){
        x[i] = (n>>i) & 1;
        i++;
    }
    

    int p1 = 0, p2 =0;
    while(p1<32 && p2<32){
        if(x[p1]==1&&x[p2]==0 && p2 - p1> 1){
            x[p1] = -1;
            x[p2] = 1;
            while(p1<p2-1){
                p1++;
                x[p1] = 0;
                
            }
            p1++;
        }else if(x[p1]==0){
            p1++;
            p2 = p1;
        }else if(x[p1]==1 && x[p2]==1){
            p2++;
        }else if(x[p1]==1&&x[p2]==0){
            p1 = p2;
        }
       
    }
    int k = 31;
    while(k>=0){
        if(x[k]!=0){
            break;
        }
        k--;
    }
    k++;
    cout<<k<<endl;
    forn(i,0,k){
        cout<<x[i]<<" ";
    }
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
            solve();

        
        return 0;
    }