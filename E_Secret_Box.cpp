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
    long long h, n;
    cin >> h >> n;

    vector<long long> a(n), c(n);
    for (long long i = 0; i < n; ++i) {
        cin >> a[i];
    }
    forn(i,0,n) cin>>c[i];

    vector<long long> cooldown(n, 0);
    long long turns = 0;
    while (h > 0) {
        long long damage = 0;
        ll attacked = 0; // Flag to check if any attack was made this turn
        for (long long i = 0; i < n; ++i) {
            if (cooldown[i] == 0) {
                damage += a[i];
                cooldown[i] = c[i];
                attacked = i; // Set attacked to true if an attack is made
            } else {
                cooldown[i]--;
            }
        }
        if (!attacked) { // If no attack was made this turn, wait until the next turn
            long long minCooldown = *min_element(cooldown.begin(), cooldown.end());
            turns += minCooldown; // Wait until the next available attack
            for (long long i = 0; i < n; ++i) {
                
                cooldown[i] -= minCooldown; // Reduce cooldown for all attacks
            }

        } else {
            cout<<h<<endl;
            h -= damage;
            if (h <= 0) // Check if the boss is defeated within the current turn
                break;
            turns++;
        }
    }

    cout << turns + 1 << endl;
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