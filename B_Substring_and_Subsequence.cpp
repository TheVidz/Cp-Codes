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
    
    string a,b;
    cin>>a>>b;
    int l = 0, ans = a.length();
    string anst = a;
    for (int i = 0; i < b.length(); i++)
    {
        if(a.find(b[i])==string::npos){
            ans++;
            string temp = b[i];
            temp.append(a);
            anst = temp;
        }else{
            if(l< a.find(b)){
                l = a.find(b);
            }
                
            else{

            }

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
    
        while(t--) 
            solve();

        return 0;
}