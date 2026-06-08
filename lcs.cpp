#include <bits/stdc++.h>
using namespace std;

int static dp[1001][1001];

int lcs(string s1, string s2, int n, int m){

    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < m; i++)
        {
            if(n==0||m==0){
                dp[n][m] = 0;
            }
        }
        
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if(s1[i]==s2[j]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }else{
                dp[i]
            }
        }
        
    }
    
    
    if(n<0 || m <0){
        return 0;
    }
    if(dp[n][m]!=-1){
        return dp[n][m];
    }

    if(s1[n]==s2[m]){
        return 1 + lcs(s1,s2,n-1,m-1);
    }

    return max(lcs(s1,s2,n-1, m), lcs(s1, s2, n, m-1));
}

int main(){

    
    string s1, s2;
    cin >> s1 >> s2;
    auto start_time = std::chrono::high_resolution_clock::now();

    int n = s1.length(), m = s2.length();

    memset(dp, -1, sizeof(dp));
    cout<<lcs(s1, s2, n-1, m-1)<<endl;





    auto end_time = std::chrono::high_resolution_clock::now();

    // Calculate the duration
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);

    // Print the execution time
    std::cout << "Execution time: " << duration.count() << " milliseconds" << std::endl;

    return 0;
}