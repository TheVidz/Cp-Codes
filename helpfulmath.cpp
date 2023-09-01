#include <bits/stdc++.h>

using namespace std;

int main(){
   string s;
   cin>>s;
   int ones=0,twos=0,threes=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='1'){
            ones++;
        }else if(s[i]=='2'){
            twos++;
        }else if(s[i]=='3'){
            threes++;
        }

    }
    int totaldone=(s.length()/2)+1;
    
    for (size_t i = 0; i < ones; i++)
    {totaldone--;
        if(totaldone>0)
        cout<<1<<'+';
        else
        cout<<1;
        /* code */
    }

    for (size_t i = 0; i < twos; i++)
    {   totaldone--;
        if(totaldone>0)
        cout<<2<<'+';
        else
        cout<<2;
        /* code */
    }

    for (size_t i = 0; i < threes; i++)
    { totaldone--;
        if(totaldone>0)
        cout<<3<<'+';
        else
        cout<<3;
       
        /* code */
    }
    
    
    
    
}   