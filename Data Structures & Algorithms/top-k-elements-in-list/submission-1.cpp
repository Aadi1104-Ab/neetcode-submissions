class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        map<int,int> freq;
        vector<pair<int,int>> result;
        vector<int> r;

        for(int x : nums) {
            freq[x]++;
        }

        for(auto it : freq) {
            result.push_back({it.second, it.first});
        }

        sort(result.begin(), result.end(), greater<>());

        for(int i = 0; i < k; i++) {
            r.push_back(result[i].second);
        }

        return r;
    }
};
