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
    
    string x, y;
    cin>>x>>y;

    int i = 0;
    while(x[i]==y[i]){
        i++;
    }
    if(x[i]<y[i]){
        string temp = x;
        x = y;
        y = temp;
    }
    forn(j,i+1,x.length()){
        if(x[j]>y[j]){
            char temp = x[j];
            x[j] = y[j];
            y[j] = temp;
        }
    }
    cout<<x<<endl;
    cout<<y<<endl;
    
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