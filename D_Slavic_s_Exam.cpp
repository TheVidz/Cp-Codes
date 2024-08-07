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
    
    string s,t;
    cin>>s>>t;
    int n = s.size(), m = t.size();

    int i = 0, j = 0;

    while(i<n){
        if(j<m&&(s[i] == t[j] || (s[i] == '?'))){
            s[i] = t[j];
            j++;
        }
        i++;
    }
    if (j != m) {
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        for (char &ch : s) {
            if (ch == '?') {
                ch = 'a';
            }
        }
        cout<<s<<endl;
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