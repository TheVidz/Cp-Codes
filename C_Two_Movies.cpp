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
    ll a[n], b[n];
    forn(i,0,n) cin>>a[i];
    forn(i,0,n) cin>>b[i];
    ll one = 0, two = 0, pos = 0, mis =0;

    for (int i = 0; i < n; i++)
    {

        if(a[i]>b[i]) one+=a[i];
        else if(a[i]<b[i]) two+=b[i];
        else{
            if(a[i]==1) pos++;
            if(a[i]==-1) mis++;
        }    
        
    }

    while(pos--){
            if(one>two) two++;
            else 
                one++;
        }

        while(mis--){
            if(one<two) two--;
            else 
                one--;
        }
    cout<<min(one,two)<<endl;
    
    
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