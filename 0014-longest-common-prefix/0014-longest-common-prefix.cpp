class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) return "";
        string ans = "";
        for (int i = 0; i < strs[0].size(); i++) {
            char c = strs[0][i];
            for (int j = 0; j < strs.size(); j++) {
                if (i >= strs[j].size() || strs[j][i] != c) {
                    return ans;
                }
            }
            ans += c;
        }
        return ans;
    }
};