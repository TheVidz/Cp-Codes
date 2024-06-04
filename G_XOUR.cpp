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
    
    int n;
    cin>>n;
    int a[n];
    map<int, priority_queue<int>> mpp;
    forn(i,0,n){
        cin>>a[i];
        mpp[a[i]>>2].push(-a[i]);
    }
    
    forn(i,0,n){
        cout<<-mpp[a[i]>>2].top() <<" ";
        mpp[a[i]>>2].pop();
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