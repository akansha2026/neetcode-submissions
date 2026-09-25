class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int ans = 0;
        int cnt = 1, n = nums.size();

        for(int i=0; i<n; i++){
            if(i == 0){
                ans = 1;
                continue;
            }

            if(nums[i - 1] == nums[i]) continue;
            else if(nums[i-1] + 1 == nums[i]){
                cnt++;
                ans = max(ans, cnt);
            }
            else cnt = 1;
        }

        return ans;
    }
};
