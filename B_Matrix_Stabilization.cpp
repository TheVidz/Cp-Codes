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
    
    ll n,m;
    cin>>n>>m;
    ll A[n+2][m+2];
    forn(i,0,n+2){
        A[i][0] = -1;
    }
    forn(i,0,n+2){
        A[i][m+1] = -1;
    }
    forn(j,0,m+2){
        A[0][j] = -1;
    }
    forn(j,0,m+2){
        A[n+1][j] = -1;
    }
    forn(i,1,n+1){
        forn(j,1,m+1){
            cin>>A[i][j];
        }
    }

    forn(i,1,n+1){
        

        forn(j,1,m+1){



            ll curr = A[i][j];
            ll up = (i-1) , dow = (i+1) , l = (j-1) , r = (j+1) ;
            if(curr>A[up][j] && curr>A[dow][j]&&curr>A[i][l]&&curr>A[i][r]){
                
                A[i][j] = max(max(A[up][j],A[dow][j]),max(A[i][l],A[i][r]));
            }
        }
    }
    forn(i,1,n+1){
        forn(j,1,m+1){
            cout<<A[i][j]<<" ";
        }
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