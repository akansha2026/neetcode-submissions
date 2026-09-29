class Solution {
public:
    int  minCost(int idx, vector<int> &c, vector<int> &dp){
        int n = c.size();
        
        if(idx >= n) return 0;

        if(dp[idx] != 1) return dp[idx];

        return dp[idx] = c[idx] + min(minCost(idx + 1, c, dp), minCost(idx + 2, c, dp));
    }

    int minCostClimbingStairs(vector<int>& cost) {

        int n = cost.size();
        vector<int> dp(n+1, 1);
        return min(minCost(1, cost, dp), minCost(0, cost, dp));
    }
};
