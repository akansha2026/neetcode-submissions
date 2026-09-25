class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        map<int,int> mp;
        for(auto &x:nums){
            int prev = x - 1;
            if(mp.count(prev) == 0) mp[x] = 1;
            else{
                mp[x] = mp[prev] + 1;
            }
        }

        int ans = 0;
        for(auto &it:mp){
            ans = max(it.second, ans);
        }

        return ans;
        
    }
};
