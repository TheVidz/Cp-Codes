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

int minimise(int x, vector<int>& arr, int n){
    if(arr.empty()){
        return 0;
    }

    auto it = std::lower_bound(arr.begin(), arr.end(), x);

    if(it==arr.end()){
        return x-arr.back();
    }else if(it==arr.begin()){
        return (*it) - x;
    }
        auto prev_it = std::prev(it);
    
        return min(x-(*prev_it), (*it)-x);
    
    
}
void solve(){
    ll n, k, x;
    cin>> n>> k>>x;

    vector<int> a(n);
    forn(i,0,n) cin>>a[i];
    sort(all(a));
    
    vector<pair<int,int>> spots;
    forn(i,0,k){
        spots.push_back();
    }
    
    for(int i = 0; i <=*max_element(all(a)); i++){
        int mn = minimise(i,a,n);
        spots.push_back({mn, i});
    }
    sort(all(spots), greater<pair<int,int>>());
    forn(i,0,k){
        cout << spots[i].second << " ";
    }
    cout<<endl;
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
