#include <bits/stdc++.h>
using namespace std;

#define pb push_back 
#define all(v) v.begin(), v.end()
#define forn(i, k, n) for(int i = k; i < n; i++)
#define pyes cout<<"YES"<<endl
#define pno cout<<"NO"<<endl

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

const int INF = 1e9;
const ll mod = 1000000007;

int bin[33];

void solve(){
    
    int n;
    cin>>n;
    forn(i,2,32){
        if(n % bin[33-i]==0){
            while(n % bin[33-i]==0)
                n = n/bin[33-i];
        }
    }
    
    if(n<2){
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
    
//prep

forn(i,1,32){
    char s[6];
    int temp = i;
    forn(j,0,6){
        s[5-j] = (temp & 1) +'0';
        temp>>=1;
    }
    bin[i] = atoi(s);
}
//forn(i,1,32) cout<<bin[i]<<endl;

    int t=1;
    cin>>t;

        while(t--) 
            solve();


    

        
        return 0;
    }