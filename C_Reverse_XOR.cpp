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


void solve(){
    
    
    ll n; 
    cin >> n;
    string binstr = bitset<32>(n).to_string();
    
    //cout<<binstr<<endl;

    int i = 0, j = 31;
    
    while(binstr[i]=='0'){
        i++;
    }
    while(binstr[j]=='0'){
        j--;
    }
    int len = j-i +1;
    if(len&1){
        if(binstr[(i+j)/2]=='1'){
            pno;
        }
    }

    while(i<j){
        if(binstr[i]==binstr[j]){
            i++;
            j--;
        }else{
            pno;
        }
    }
    pyes;

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