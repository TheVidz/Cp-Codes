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
//The only verdict is vengeance; a vendetta, held as a votive, not in vain, for the value and veracity of such shall one day vindicate the vigilant and the virtuous.

void solve() {
    int n;
    cin>>n;
    int total_elements = 1<<n;
    vector<bool> used(total_elements,false);
    vector<int> result;

    int current_and = total_elements -1;
    result.push_back(current_and);
    used[current_and] =true;

    for (int i = n - 1; i >=0; i--) {
        current_and ^=(1<<i);
        result.push_back(current_and);
        used[current_and] = true;
    }

    for (int i = 0; i <total_elements; i++) {
        if (!used[i]) {
            result.push_back(i);
        }
    }
    for (int i = 0; i <total_elements; i++) {
        cout << result[i] <<" ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}