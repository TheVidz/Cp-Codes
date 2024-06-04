    #include <bits/stdc++.h>
    using namespace std;

    #define pb push_back 
    #define all(v) v.begin(), v.end()
    #define forn(i, k, n) for(int i = k; i < n; i++)

    typedef long long ll;
    typedef pair<ll, ll> pll;
    typedef vector<int> vi;
    typedef vector<ll> vll;

    const int INF = 1e9;
    const ll mod = 1000000007;

    void solve(){
        
        ll n,f,k;
        cin>>n>>f>>k;
        vll a(n);
        
        forn(i,0,n) cin>>a[i];
        ll x = a[f-1];
        sort(all(a), greater<ll>());

        bool poss = false;
        forn(i,0,k){
            if(a[i] == x){
                poss = true;
            }
        }
        bool poss2 = false;
        forn(i,k,n){
            if(a[i]==x)
                poss2 = true;
        }

        

        if(!poss){
            cout<<"NO"<<endl;
        }else if(poss2){
            cout<<"MAYBE"<<endl;
        }else{
            cout<<"YES"<<endl;
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