class Solution {
public:
    string commonPrefix(const string& str1, const string& str2) {
        int length1 = str1.length();
        int length2 = str2.length();
        int min_length = min(length1, length2);

        int i = 0;
        while (i < min_length && str1[i] == str2[i]) {
            i++;
        }

        return str1.substr(0, i);
    }

    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }

        string prefix = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            prefix = commonPrefix(prefix, strs[i]);
            if (prefix.empty()) {
                break;
            }
        }

        return prefix;
    }
};