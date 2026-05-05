class Solution {
   public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();

        sort(strs.begin(), strs.end());

        string first = strs[0];
        string last = strs[n - 1];

        int i = 0;

        string result = "";

        while (i < first.length() && i < last.length()) {
            if (first[i] != last[i]) {
                return result;
            } else if (first[i] == last[i]) {
                result += first[i];
            }

            i++;
        }

        return result;
    }
};