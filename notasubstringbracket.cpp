#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        stack<char> s;
        for(int i=0;i<str.length();i++)
        {
            if(s.empty() || s.top()==str[i])
            {
                s.push(str[i]);
            }
           else if(s.top()!=str[i])
            {
                s.pop();
            }
           
        }
        
        if(s.empty())
        {
            cout<<"NO"<<endl;
        }
        else
        {
           
           cout<<"YES"<<endl; 
           for(int i=0;i<2*str.length();i++)
            {
                if(i%2==0)
                {
                    cout<<'(';
                }
                else
                {
                    cout<<')';
                }
            }
        }
        cout<<endl;
        
    }
    return 0;
}