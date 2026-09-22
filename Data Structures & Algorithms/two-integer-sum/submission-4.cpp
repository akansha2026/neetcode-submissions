class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        int i = 1;
        int n = nums.size();
        mp[nums[0]] = 0;
        while(i < n){
            int x = nums[i];
            if(mp.find(target - x) != mp.end()) return {mp[target - x], i};
            mp[x] = i;
            i++;
        }

        return {-1, -1};
    }
};
