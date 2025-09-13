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

void solve() {
    ll n;
    cin >> n;
    vector< vector<ll>> a(n);
    ll max_len = 0;
    
    for (int i = 0; i < n; ++i) {
        ll k;
        cin >> k;
        a[i].resize(k);
        max_len = max(max_len, k);
        for (int j = 0; j < k; ++j) {
            cin >> a[i][j];
        }
    }

    sort(all(a));

    ll base_len = a.front().size(), total_len = 0;

    total_len+=base_len;
    vector<ll> ans;
    for(auto x:a[0])
    ans.push_back(x);
    
    while(total_len<max_len){
        ll chosenIdx = total_len,  chosenVal = INT_MAX;
        for(int y = 0; y< a.size(); y++){
            if(total_len<a[y].size()){
                if(a[y][total_len]<chosenVal){
                    chosenVal = a[y][total_len];
                    chosenIdx = y;
                }
            }
        }
        ll new_len = a[chosenIdx].size();
        forn(i,total_len, new_len){
            ans.push_back(a[chosenIdx][i]);
        }
        total_len = new_len;
    }
    for(auto x:ans)
        cout<<x<<" ";
    cout<<endl;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}