class Solution {
public:
    bool isPalindrome(string s) {

         transform(s.begin(), s.end(), s.begin(), ::tolower);

             string result = "";
    for (char c : s) {
        if (isalnum(c)) {   
            result += c;
        }
    }

        
        int size = result.size();

        int i = 0 , j = size - 1;

        while(i < j)
        {
            if(result[i] != result[j])
            {
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};
