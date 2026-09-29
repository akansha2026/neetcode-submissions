class Solution {
public:
    void subset(int idx, vector<int> &nums, vector<int> &curr, int &ans){
        int n = nums.size();
        if(idx >= n){
            if(curr.size() == 0) return;
            int xor_val = 0;

            for(auto &x:curr){
                xor_val = xor_val ^ x;
            }
            ans += xor_val;
            return;
        }

        // Take
        curr.push_back(nums[idx]);
        subset(idx+1, nums, curr, ans);

        // Not take
        curr.pop_back();
        subset(idx+1, nums, curr, ans);
    }
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();

        int ans = 0;
        vector<int> curr;

        subset(0, nums, curr, ans);

        return ans;

    }
};