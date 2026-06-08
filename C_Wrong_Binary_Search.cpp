#include <bits/stdc++.h>
using namespace std;

#define pb push_back 
#define all(v) v.begin(), v.end()
#define forn(i, k, n) for(int i = k; i < n; i++)
#define pyes cout<<"YES\n";return
#define pno cout<<"NO\n";return

typedef long long ll;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    vector<int> p(n+1);
    forn(i,0,n+1) p[i] = i; 

    for(int i = 1; i <= n;) {
        if(s[i-1] == '1') { i++; continue; }

        int j = i;
        while(j <= n && s[j-1] == '0') j++;
        int len = j - i; 

        if(len == 1) {
            cout << "NO"<<endl;
            return;
        }

        if(len % 2 == 0) {
            
            for(int k = i; k < j; k += 2) swap(p[k], p[k+1]);
        } else {
            // do pair-swaps up to the last three elements, then a 3-cycle on the last three
            // last three positions are (j-3, j-2, j-1)
            for(int k = i; k <= j - 4; k += 2) swap(p[k], p[k+1]);
            int x = j - 3, y = j - 2, z = j - 1;
            
            p[x] = y;
            p[y] = z;
            p[z] = x;
        }
        i = j;
    }

    cout << "YES"<<endl;
    for(int i = 1; i <= n; ++i) {
        cout << p[i] << " ";
    }
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) solve();
}
