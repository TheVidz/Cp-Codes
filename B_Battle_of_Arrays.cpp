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
    
    ll n, m;
    cin>>n>>m;
    multiset<ll> a,b;
    forn(i,0, n){
        ll temp;
        cin>>temp;
        a.insert(temp);
    }
    forn(i,0,m){
        ll temp;
        cin>>temp;
        b.insert(temp);
    }

    ll turn = 0;
    while(1){
        if(a.empty()){
            cout<<"Bob"<<endl;
            return;
        }else if(b.empty()){
            cout<<"Alice"<<endl;
            return;
        }

        ll alicemax = *a.rbegin();
        ll bobmax = *b.rbegin();

        if(turn%2==0){
            
            b.erase(prev(b.end()));
            if(bobmax <=alicemax){
                // bobmax has been deleted pehle hi
            }else{
                // basically decrementing the bobmax by alicemax
                b.insert(bobmax - alicemax);
            }
        }else{
            
            a.erase(prev(a.end()));
            if(alicemax <=bobmax){
                // just remove
            }else{
                // decrease alicmax
                a.insert(alicemax-bobmax);
                
            }
        }
        turn++;

    }


    // turner: person whose turn it is
    // now, turner wins when the opponenets array becomes empty, ie, 
    //turner wins when opps n=1 && turners array has a number >= opps num
    //

    // 10 30, 20 20 10
    // 10 30, 20 10
    // 10 10, 20 10
    //a10 10, 10 10
    //b10, 10 10
    //a10,10
    //b 0,10 bob wins

    //a 40,90
    //b 40,50
    //bob wins

    // if turners max number is more than max number of opp, opp deleted
    // if turners max number is less than max num of opp, but turner is greater than half of opp, opp deleted
    // if turners max num is less than half of opp, opp wins
    

    // so bob wins instantly when alice max is less than equal half of bobmax



  
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