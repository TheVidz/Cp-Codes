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
    cout<<"asd";
    vll b(n);
    ll tot = 0;
    vector<vll> freq(n,vector<ll>());
    cout<<"asd";
    forn(i,0,n){ 
        cin>>b[i];
        freq[b[i]].push_back(i);}
    

    bool poss = true;

    forn(i,0,n){
        if(freq[i].size()%(i+1)!=0)
        {
            poss = false;
            break;
        }
    }
    if(poss){
        cout<<"asd";
        ll curr = 1;
        vll a(n,0);
        forn(i,0,n){
            ll j = 0;
            while(j<freq[i].size()){
                forn(k,0,i+1){
                    a[freq[i][j]] = curr;
                }
                j++;
            }
            curr++;
        }
        forn(i,0,n) 
            cout<<a[i];
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
    cout<<"asd";
        while(t--) 
            solve();

        return 0;
}