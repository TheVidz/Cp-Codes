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

    
    vector<int> path_length(n + 1);
    int best_start = 1;
    int max_length = 0;
    
    for (int i = 1; i <= n; i++) {
        cout << "? "<< i<<" "<< n << " ";
        for (int j = 1; j <= n; j++) {
            cout << j << " ";
        }
        cout<<endl;
        
        cin >> path_length[i];
        
        if (path_length[i] > max_length) {
            max_length = path_length[i];
            best_start = i;
        }
    }
    
    vector<int> longest_path;
    int current = best_start;
    int expected_length = max_length;
    
    longest_path.push_back(current);
    
    while (expected_length > 1) {
        vector<int> candidates;
        
        for (int next = 1; next <= n; next++) {
            if (next == current) continue;
            if (path_length[next] == expected_length - 1) {
                candidates.push_back(next);
            }
        }
        
        if (candidates.empty()) break;
        
        int actual_next = -1;
        
        for (int candidate : candidates) {
            vector<int> test_set = longest_path;
            test_set.push_back(candidate);
            
            cout << "? " <<best_start<<" " <<test_set.size() << " ";
            for (int v : test_set) {
                cout << v << " ";
            }
            cout << endl;
            
            int result_length;
            cin >> result_length;
            
            if (result_length == longest_path.size() + 1) {
                actual_next = candidate;
                break;
            }
        }
        
        if (actual_next == -1) break;
        
        longest_path.push_back(actual_next);
        current = actual_next;
        expected_length--;
    }
    
    cout << "! " << longest_path.size() << " ";
    for (int i = 0; i < longest_path.size(); i++) {
        cout << longest_path[i];
        if (i < longest_path.size() - 1) cout << " ";
    }
    cout << endl;
    
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
