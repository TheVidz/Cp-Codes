#include <bits/stdc++.h>
using namespace std;

#define pb push_back 
#define all(v) v.begin(), v.end()
#define forn(i, k, n) for(ll i = k; i < n; i++)
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
    vll arr(n);
    forn(i,0,n) cin>>arr[i];
    
    vector<pll> edges;
    stack<ll> st;
    
    forn(i,0,n){
        while(!st.empty() && arr[st.top()] > arr[i]){
            st.pop();
        }
        if(!st.empty()){
            edges.pb({arr[st.top()], arr[i]});
        }
        st.push(i);
    }
    
    vector<ll> roots;
    ll cur_min = n + 1;
    forn(i,0,n){
        if(arr[i] < cur_min){
            cur_min = arr[i];
            roots.pb(i);
        }
    }
    
    forn(i,1,roots.size()){
        ll prev_idx = roots[i-1];
        ll curr_idx = roots[i];
        ll limit = (i == roots.size() - 1) ? n : roots[i+1];
        bool found = false;
        
        forn(j, curr_idx, limit){
            if(arr[j] > arr[prev_idx]){
                edges.pb({arr[prev_idx], arr[j]});
                found = true;
                break;
            }
        }
        
        if(!found){
            pno;
        }
    }
    
    cout << "YES" << endl;
    for(auto &e : edges){
        cout << e.first << " " << e.second << "\n";
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
            {
            solve();
            
}
        return 0;
}