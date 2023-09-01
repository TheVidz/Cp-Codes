#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.length();
    unordered_set<char> vowels= {'A','E','I','O','U','Y','a','e','i','o','u','y'};
    for (int i = 0; i <n ; i++){
        if(vowels.find(s[i])==vowels.end()){
            cout<<'.'<<(char)tolower(s[i]);
            
        }
    }
    
}
