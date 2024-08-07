#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 1, k = 3;

    vector<vector<int>> dp(n,vector<int>(26,0));

    for(int i = 0;i<26;i++){
        dp[0][i] = 1;
    }

    for(int ind = 1; ind<n;ind++){
        for(int ch = 0;ch<26;ch++){
            for(int j = max(0, ch - k); j <= min(25,ch+k);j++){
                cout<<(char)('a'+ch)<<" "<<(char)('a'+j)<<endl;
                dp[ind][ch] += dp[ind-1][j];
            }
        }
    }   

    long long sum = 0;
    for(auto x:dp[n-1]){
        sum+=x;
    }
    cout<<sum<<endl;

    return 0;
}