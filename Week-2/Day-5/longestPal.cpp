class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";

        int start = 0;
        int maxLen = 1;

        for (int i = 0; i < s.size(); i++) {
            int len1 = expand(i, i, s);       
            int len2 = expand(i, i + 1, s);   

            int len = max(len1, len2);

            if (len > maxLen) {
                start = i - (len - 1) / 2;
                maxLen = len;
            }
        }

        return s.substr(start, maxLen);
    }

    int expand(int left, int right, string& s) {
        while (left >= 0 &&
               right < s.size() &&
               s[left] == s[right]) {
            left--;
            right++;
        }

        return right - left - 1;
    }
};