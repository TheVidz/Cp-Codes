#include <bits/stdc++.h>
using namespace std;


int main(){
 
  int n;
  cin>>n;
  unordered_map<int,int> factors; 
  while (n-->0)
  {
    int s;
    cin>>s;
    for(int i=2;i<=sqrt(s);i++){
        if(s%i==0){
            factors[i]++;
        }
        while(s%i==0){
            s/=i;
        }
    }
    if(s>1) {
        factors[s]+=1;
    }

  }

  int ans=1;
  for(auto it = factors.begin();it!=factors.end();it++){
    ans = max(ans, (*it).second);

  }
  cout<<ans<<endl;

  
	return 0;
}