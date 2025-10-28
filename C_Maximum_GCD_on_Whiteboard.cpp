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
bool isValid(int g, int* arr, int n, int k){
    int cost= 0;
    int total = k;
    int i = 0;
    while(i<n){
        if(arr[i]>= g){
            break;
        }
        i++;
    }
    cost+= i;

    if(cost>total){
        return false;
    }
    total-=cost;
    vector<int> leftovers;

    while(i<n){
        if(arr[i]%g!=0){
            leftovers.push_back(arr[i]);
        }
        i++;
    }

    int cost2 = 0;

    for(auto x:leftovers){
        if(x<3*g){
            cost2++;
            continue;
        }
        int R = x%(3*g);
        if(R==0){
            continue;
        }
        if(R<g){
            cost2++;
        }

    }
    if(cost2>total){
        return false;
    }
    return true;
}
void solve(){
    
    ll n,k;
    cin>>n>>k;

    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    sort(a,a+n);

    int lo = 1, hi = *max_element(a,a+n);

 for(int i = hi; i>=0; i--){
        if(isValid(i, a, n, k)){
            cout<<i<<endl;
            return;
        }
    }
    // set<int> factors = {1, hi};

    // for(int i = 2; i <= sqrt(hi); i++){
    //     if(hi%i==0){
    //         factors.insert(i);
    //         factors.insert(hi/i);
    //     }
    // }


    // int numOfFact = factors.size();

    // for(int i = numOfFact -1; i>=0; i--){
    //     int g = *next(factors.begin(),i);
    //     if(isValid(g, a, n, k)){
    //         cout<<g<<endl;
    //         return;
    //     }
    // }
    


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