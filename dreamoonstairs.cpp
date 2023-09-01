#include <bits/stdc++.h>

using namespace std;

int main(){

int n,m;
cin>>n>>m;

if(n%2==0){
    int ans=n/2;
    while(ans%m!=0 && ans<n){
       
        ans++;
    }
    if(ans%m!=0){
            cout<<-1<<endl;
            
        }else{
    cout<<ans<<endl;}
    
}else{
    int ans=(n+1)/2;
    while(ans%m!=0 && ans<n){
 
        ans++;
    }
    if(ans%m!=0){
            cout<<-1<<endl;
          
        }else{
    cout<<ans<<endl;}
}

}
