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
    
    ll n,q;
    cin>>n>>q;
    string s;
    cin>>s;

    int b_count = 0;
    for(char c:s)
        if(c=='B')
            b_count++;

    while(q-->0){
        int x;
        cin>>x;
        if(b_count==0){
            cout<<x<<endl;
        }else{
            int seconds = 0;

            
            int pos = 0;
            while (x > 0) {
                char c = s[pos];
                if (c == 'A') --x;
                else x /= 2;
                seconds++;
                pos = (pos + 1) % n;
            }
            cout<<seconds<<endl;
        }

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