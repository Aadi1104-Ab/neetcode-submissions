class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int n = nums[i];

            if (mp.find(n) != mp.end()) {
                return true;
            }

            mp[n]++;
        }

        return false;
    }
};