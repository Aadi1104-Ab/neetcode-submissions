class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size()  == 0)
        return false;
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i < nums.size() - 1 ; i++)
        {
            int j = i + 1;
                if(nums[i] == nums[j])
                {
                    return true;
                }
        }
        return false;
    }
};