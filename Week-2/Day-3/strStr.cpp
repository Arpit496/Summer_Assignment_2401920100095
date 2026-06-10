class Solution {
public:
    vector<int> buildLPS(string pattern) {
        int patternLength = pattern.size();

        vector<int> lps(patternLength, 0);

        int prefixLength = 0;
        int currentIndex = 1;

        while (currentIndex < patternLength) {

            if (pattern[currentIndex] == pattern[prefixLength]) {

                prefixLength++;
                lps[currentIndex] = prefixLength;
                currentIndex++;
            }
            else {

                if (prefixLength != 0) {
                    prefixLength = lps[prefixLength - 1];
                }
                else {
                    lps[currentIndex] = 0;
                    currentIndex++;
                }
            }
        }

        return lps;
    }

    int strStr(string haystack, string needle) {

        if (needle.empty()) return 0;

        vector<int> lps = buildLPS(needle);

        int haystackIndex = 0;
        int needleIndex = 0;

        while (haystackIndex < haystack.size()) {

            if (haystack[haystackIndex] == needle[needleIndex]) {
                haystackIndex++;
                needleIndex++;
            }

            if (needleIndex == needle.size()) {
                return haystackIndex - needleIndex;
            }

            else if (
                haystackIndex < haystack.size() &&
                haystack[haystackIndex] != needle[needleIndex]
            ) {

                if (needleIndex != 0) {
                    needleIndex = lps[needleIndex - 1];
                }
                else {
                    haystackIndex++;
                }
            }
        }

        return -1;
    }
}class Solution {
public:
    vector<int> buildLPS(string pattern) {
        int patternLength = pattern.size();

        vector<int> lps(patternLength, 0);

        int prefixLength = 0;
        int currentIndex = 1;

        while (currentIndex < patternLength) {

            if (pattern[currentIndex] == pattern[prefixLength]) {

                prefixLength++;
                lps[currentIndex] = prefixLength;
                currentIndex++;
            }
            else {

                if (prefixLength != 0) {
                    prefixLength = lps[prefixLength - 1];
                }
                else {
                    lps[currentIndex] = 0;
                    currentIndex++;
                }
            }
        }

        return lps;
    }

    int strStr(string haystack, string needle) {

        if (needle.empty()) return 0;

        vector<int> lps = buildLPS(needle);

        int haystackIndex = 0;
        int needleIndex = 0;

        while (haystackIndex < haystack.size()) {

            if (haystack[haystackIndex] == needle[needleIndex]) {
                haystackIndex++;
                needleIndex++;
            }

            if (needleIndex == needle.size()) {
                return haystackIndex - needleIndex;
            }

            else if (
                haystackIndex < haystack.size() &&
                haystack[haystackIndex] != needle[needleIndex]
            ) {

                if (needleIndex != 0) {
                    needleIndex = lps[needleIndex - 1];
                }
                else {
                    haystackIndex++;
                }
            }
        }

        return -1;
    }
};