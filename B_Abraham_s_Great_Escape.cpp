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
    vector<vector<char>> mat(n,vector<char>(n, 'D'));
    
        ll left = n*n - k;


        if(k<=n){
            ll loops = (n*(n-1))/2;
            ll curri = 0, currj = 0;
            for(int count = 0; count<loops;count++){

            mat[curri][currj] = 'D';
            mat[curri+1][currj] = 'U';
            
            if(currj+1>= n){
                curri += 2;
                currj = 0;
            }else{
                currj++;
            }
            }

            ll rl = (n-k)/2;
            for(int coun = 0;coun<rl*2;coun++){
                    mat[n-1][coun] = 'R';
                    mat[n-1][coun+1] = 'L';
                    coun++;
                }
            if(2*rl!=n-k){
                
                mat[n-1][n-k-1] = 'L';
            }
        }else{
            ll loops = (n*n-k)/2;
        
        ll curri = 0, currj = 0;
        for(int count = 0; count<loops;count++){

            mat[curri][currj] = 'D';
            mat[curri+1][currj] = 'U';
            
            if(currj+1>= n){
                curri += 2;
                currj = 0;
            }else{
                currj++;
            }
        }
            if(left&1){
                mat[curri][currj] = 'L';
            }
        }

        
    



    if((n*n-k)>1||(n*n-k==0)){
        ll loops = (n*n-k)/2;
        
        ll curri = 0, currj = 0;
        for(int count = 0; count<loops;count++){

            mat[curri][currj] = 'D';
            mat[curri+1][currj] = 'U';
            
            if(currj+1>= n){
                curri += 2;
                currj = 0;
            }else{
                currj++;
            }
        }
        if((n*n-k)%2==1){
            if(currj+1>= n){
                curri += 2;
                currj = 0;
            }
            mat[curri][currj] = 'L';
        }

        if(n*n - 2*loops > n){
            
        }


        cout<<"YES"<<endl;
        forn(i,0,n){
            forn(j,0,n){
                cout<<mat[i][j];
            }
            cout<<endl;
        }

    }else{
        cout<<"NO"<<endl;
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