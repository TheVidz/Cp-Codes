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
    
    ll n;
    cin>>n;
    vll arr(n);
    forn(i,0,n) cin>>arr[i];
    sort(all(arr));
    vll pairs;

    for(int i = 0; i < arr.size()-1; i++){
        if(arr[i]==arr[i+1]){
            pairs.push_back(arr[i]);
            i++;
            arr.erase(arr.begin()+i-1,arr.begin()+i+1);
        }
    }

    ll pairsum = 0;
    for(auto x:pairs) pairsum+=x;
    pairsum*=2;
    ll oddans = 0;

    for(int i = arr.size()-1; i>=0;i--){
        if(arr[i]< pairsum){
            oddans = arr[i] + pairsum;
            break;
        }
    }

    ll evenans = 0;


    for(int i = arr.size()-1; i>0;i--){
        if(arr[i]< pairsum + arr[i-1]){
            evenans = arr[i] + pairsum + arr[i-1];
            break;
        }
    }

    cout<<max(oddans,evenans)<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t=1;
    cin>>t;
    
        while(t--) 
            {
            solve();
            
}
        return 0;
}