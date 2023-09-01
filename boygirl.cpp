#include <bits/stdc++.h>

using namespace std;

int main(){
string s;
cin>>s;
unordered_map<char,int> freq;
for (char i:s)
{
    freq[i]++;
}
int c=0;

for(auto i:freq){
    c++;
}


if(c%2==1){     
    cout<<"IGNORE HIM!"<<endl;
}else{
    cout<<"CHAT WITH HER!"<<endl;
}       

}
