class Solution {
public:
    string processStr(string s) {
        string result = "";

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '*' || s[i] == '#' || s[i] == '%') {
                if (result.length() > 0) {
                    if (s[i] == '*')
                        result.pop_back();
                    if (s[i] == '#')
                        result.append(result);
                    if (s[i] == '%') {
                        string reverse;
                        for (int j = result.length() - 1; j >= 0; j--)
                            reverse.append(1, result[j]);
                        result = reverse;
                    }
                }
            } else {
                result.append(1, s[i]);
            }
        }
        return result;
    }
};