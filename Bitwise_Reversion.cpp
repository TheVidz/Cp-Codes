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

void solve(){
    
    int x, y, z;
        cin >> x >> y >> z;
        bool ok = true;
        for (int i = 0; i < 31; i++) {
            int xi = (x >> i) & 1;
            int yi = (y >> i) & 1;
            int zi = (z >> i) & 1;
            if (!(
                (xi == 0 && yi == 0 && zi == 0) ||
                (xi == 0 && yi == 1 && zi == 0) ||
                (xi == 0 && yi == 0 && zi == 1) ||
                (xi == 1 && yi == 0 && zi == 0) ||
                (xi == 1 && yi == 1 && zi == 1)
            )) {
                ok = false;
                break;
            }
        }
        if(ok){
            pyes;
        }else{
            pno;
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