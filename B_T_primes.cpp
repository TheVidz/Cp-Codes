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

//The only verdict is vengeance; a vendetta, held as a votive, not in vain, for the value and veracity of such shall one day vindicate the vigilant and the virtuous.
set<long long> prime_squares(){
    static bool arr[1000001];

    for(int i = 2;i*i < 1000001;i++){
        if(!arr[i]){
            for (int j = i*i; j < 1000001; j += i)
            {
                arr[j] = true;
            }
        }
    }

    set<ll> res;
    for(ll i = 2; i < 1000001;i++){
        if(!arr[i])
        res.insert(i*i);
    }
    return res;
}

void solve(){
    
    ll n;
    cin>>n;

    set<ll> sqn(prime_squares());
    
    long long x; cin >> x;

    if (sqn.find(x) != sqn.end())
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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
            solve();

        return 0;
}