class Solution {
public:
    string removeOccurrences(string s, string part) {
        int st = 0;
        int end = s.length() - 1;
        for(int i = st; i <= end; i++){
           if(s.find(part) < s.length()){
                s.erase(s.find(part), part.length());
           }   
        }
        return s;
    }
};