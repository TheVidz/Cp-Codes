#include <bits/stdc++.h>
using namespace std;


int main(){
string s;
cin>>s;
int x;
if(s.length()>1){x = 10*s[s.length()-2]+s[s.length()-1];}
else{x=s[0];}


    if(x%4==0){
        cout<<4<<endl;
    }else{
        cout<<0<<endl;
    }






return 0;
}