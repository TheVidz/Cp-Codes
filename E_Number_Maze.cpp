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
    
    int n,j,k;
    cin>>n>>j>>k;
    j--;
    k--;
    if(n==12){
        vector<string> ls{"12","21"};
        string x = ls[j], y = ls[k];
        int a = 0, b = 0;

        forn(i,0,2){
            if(x[i]==y[i]){
                a++;
            }
        }
        b = 2 - a;

        cout<<a<<"A"<<b<<"B"<<endl;
    }else if(n==123){
        vector<string> ls{"123","132","213","231","312","321"};
        string x = ls[j], y = ls[k];
        int a = 0, b = 0;

        forn(i,0,3){
            if(x[i]==y[i]){
                a++;
            }
        }
        b = 3 - a;

        cout<<a<<"A"<<b<<"B"<<endl;
    }else{
        vector<string> ls{"1234","1243","1324","1342","1423","1432",
                             "2134","2143","2314","2341","2413","2431",
                             "3124","3142","3214","3241","3412","3421",
                             "4123","4132","4213","4231","4312","4321"};
        
        string x = ls[j];
        string y = ls[k];
        int a = 0, b = 0;

        forn(i,0,4){
            if(x[i]==y[i]){
                a++;
            }
        }
        b = 4 - a;

        cout<<a<<"A"<<b<<"B"<<endl;
        
    }

}

int main(){
    
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