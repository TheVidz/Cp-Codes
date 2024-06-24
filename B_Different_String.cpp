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
    
    string s;
    cin>>s;
    map<char,int> mpp;
    for(char x:s){
        mpp[x]++;
    }
    if(mpp.size()<=1){
        pno;
    }else{
        cout<<"YES"<<endl;
        char y = s[0];
        int i = 0;
        while(s[i]==y){
            i++;
        }
        cout<<s[i];
        bool c = true;
        for(char x:s){
            if(x!=s[i]){
                cout<<x;
            }else if(!c){cout<<x;}else{
                c = false;
            }
        }
        cout<<endl;
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