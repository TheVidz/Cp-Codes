#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb push_back 
#define f first
#define s second 
#define min3(a, b, c) min(min(a, b), c)
#define max3(a, b, c) max(max(a, b), c)
#define all(v) v.begin(), v.end()


typedef long long ll;
typedef double ld;
typedef long double lld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pii> vpi;
typedef vector<pll> vpl;

const int INF = 1e9;
//const ll INF = 1e18;
const ll mod = 1000000007;
// const ll mod = 998244353;


void solve(){
	
	string s;
    cin>>s;
    string ans=s;
    int i=0;
    vector<int> lastcap,lastsmol;
    
    while(i<s.length())
    {
        if(s[i]=='b'){
            ans[i]=' ';
            
            if(lastsmol.size()>0){
                ans[lastsmol[lastsmol.size()-1]]=' ';
                
                lastsmol.pop_back();}
        }else if(s[i]=='B'){
            ans[i]=' ';
            
            if(lastcap.size()>0){
                ans[lastcap[lastcap.size()-1]]=' ';
            lastcap.pop_back();}
        }else if((int)s[i]<96){
            lastcap.push_back(i);
        }else if((int)s[i]>96){
            lastsmol.push_back(i);
        }

        i++;
    }
    
    ans.erase(remove(ans.begin(), ans.end(), ' '), ans.end());
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