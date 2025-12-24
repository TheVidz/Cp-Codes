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
    string s, t;
    cin >> s >> t;
    int n = s.length(), m = t.length();
    vector<int> sfreq(26, 0), tfreq(26, 0);
    for(char c : s) sfreq[c -'a']++;

    for(char c : t) tfreq[c -'a']++;
    
    vector<int> extra(26, 0);
    forn(i, 0, 26){
        if(sfreq[i] > tfreq[i]){
            cout << "Impossible" << endl;
            return;
        }
        extra[i] = tfreq[i] - sfreq[i];
    }
    
    
    vector<char> next_diff_char(n, 0);
    char last_diff = 0;
    
    for(int i = n - 2; i >= 0; i--){
        if(s[i+1] != s[i]){
            last_diff = s[i+1];
        }
        next_diff_char[i] = last_diff;
    }
    
    string ans = "";
    
    forn(i, 0, n){
        int curr = s[i] - 'a';
        
        forn(j, 0, curr){
            while(extra[j] > 0){
                ans += (char)('a'+ j);
                extra[j]--;
            }
        }
        char next_sig = next_diff_char[i];
        if(next_sig == 0 ||next_sig >s[i]){
            while(extra[curr] > 0){
                ans+= s[i];
                extra[curr]--;
            }
        }
        ans += s[i];
    }
    
    forn(j,0,26){
        while(extra[j] > 0){
            ans += (char)('a' +j);
            extra[j]--;
        }
    }
    
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t=1;
    cin>>t;
    
    while(t--){
        solve();
    }
    
    return 0;
}