class Solution {
public:
    string decodeString(string s) {
        int i = 0;
        return solve(s, i);
    }

    string solve(string& s, int& i) {
        string result = "";
        int num = 0;

        while (i < s.size()) {

            if (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
            }

            else if (s[i] == '[') {

                i++;  // move inside bracket

                string decoded = solve(s, i);

                while (num--) {
                    result += decoded;
                }

                num = 0;
            }

            else if (s[i] == ']') {
                return result;
            }

            else {
                result += s[i];
            }

            i++;
        }

        return result;
    }
};
