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

void solve(){
    int n, l, r;
    cin>>n>> l>> r;

    vll arr(n + 1);
    arr[0] = 0;

    if (l == 1) {
        arr[r] = 0;
        ll cur = 1;
        for (int i = 1; i <= n; i++) {
            if (i == r) continue;
            arr[i] = cur++;
        }
    }else {
        arr[l - 1] = 1;
        arr[r] = 1;
        ll curr = 2;
        for (int i = 1; i <= n; i++) {
            if (i == l - 1 || i == r) continue;
            arr[i] = curr++;
        }
    }

    forn(i,1,n+1) {
        cout << (arr[i]^arr[i - 1])<<" ";
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
            {
            solve();
            
}
        return 0;
}