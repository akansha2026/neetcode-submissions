class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeroCnt = 0;
        for(auto &x:nums){
            if(x == 0) zeroCnt++;
        }

        int n = nums.size();
        vector<int> ans(n, 0);

        if(zeroCnt == 1){
            int prod = 1;
            int idx = -1;
            for(int i=0; i<n; i++){
                if(nums[i] == 0){
                    idx = i;
                    continue;
                }
                prod *= nums[i];
            }

            ans[idx] = prod;
            return ans;
        }
        else if(zeroCnt >= 2) return ans;

        int prod = 1;
        for(int i=0; i<n; i++){
            prod *= nums[i];
        }

        for(int i=0; i<n; i++){
            ans[i] = prod / nums[i];
        }

        return ans;
    }
};
