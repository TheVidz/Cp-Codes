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
	
	int n;
    cin>>n;
    vi vec;
    for (int i = 0; i < n; i++)
    {
       int temp;
       cin >>temp;
       vec.push_back(temp);
    }
    
 map<int, int> M;
 
    // Traverse vector vec check if
    // current element is present
    // or not
    for (int i = 0; i<n; i++) {
 
        // If the current element
        // is not found then insert
        // current element with
        // frequency 1
        if (M.find(vec[i]) == M.end()) {
            M[vec[i]] = 1;
        }
 
        // Else update the frequency
        else {
            M[vec[i]]++;
        }
    }
 
    // Traverse the map to print the
    // frequency
    if(M.size()<=2){
        int x=0,y=0;
        for(auto& it:M){
            if(x==0){x= it.second;}else{y=it.second;}
            
        }
        if(n%2==0){
            if(y==0){
                cout<<"Yes"<<endl;
            }else if(x==y){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }

        }else{
            if(y==0){
                cout<<"Yes"<<endl;
            }else if(abs(x-y)==1){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
    }else{
        cout << "No"<<endl;
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