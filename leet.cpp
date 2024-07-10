class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int t = 0, n = nums.size();
        for(auto x:nums) t+=x;
        if(t&1) return false;
        t/=2;
        vector<vector<bool>> dp(n, vector<bool>(t+1,false));

        for (int i = 0; i < n; ++i)
        {
            dp[i][0] = true;
        }

        if(arr[0]<=t){
            dp[0][arr[0]] = true;
        }
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < t; ++j)
            {
                bool notTaken = dp[i-1][t];

                bool taken = false;
                if(arr[i]<=t){
                    taken = dp[i-1][t - arr[i]];
                }
                dp[i][t] = notTaken || taken;
            }
        }
        return dp[n-1][t];
    }
};