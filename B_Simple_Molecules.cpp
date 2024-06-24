#include <bits/stdc++.h>

using namespace std;

int main(){
   
        int x,y,z;
        cin>>x>>y>>z;
        int smm = (x+y+z)/2;
        if((x+y+z)%2==1 || smm-x<0 || smm-y<0 || smm-z<0){
            cout<<"Impossible"<<endl;
        }else{
            cout<<smm-z<<" "<<smm-x<<" "<<smm-y<<endl;
        }


            
        
        
    



    return 0;
}