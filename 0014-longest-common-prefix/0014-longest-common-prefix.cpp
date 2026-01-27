class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){return "";}
        string ans = "";
        for(int i = 0; i<strs.size(); i++){
            char c = strs[0][i];
            for(int j = 0; j<strs.size(); j++){
                if(i >= strs[j].size() || strs[j][i] != c){
                    return ans;
                }
            }
            ans += c;
        }
        return ans;
    }
};