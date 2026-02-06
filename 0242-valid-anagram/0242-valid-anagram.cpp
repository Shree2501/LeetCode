class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        for(int i = 0; i < s.length(); i++){
            bool found = false;
            for(int j = 0; j < t.length(); j++){
                if(s[i] == t[j]){
                    t.erase(t.begin() + j);
                    found = true;
                    break;
                }
            }
            if(!found)
                return false;
        }   
        return true;
    }
};