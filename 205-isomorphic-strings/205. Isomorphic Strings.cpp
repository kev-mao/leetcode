class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> stmapping;
        unordered_map<char, char> tsmapping;
        for(int i = 0; i < s.size(); i++){
            if(stmapping.contains(s[i]) && stmapping[s[i]] != t[i]){
                return false;
            }
            stmapping[s[i]] = t[i];

            if(tsmapping.contains(t[i]) && tsmapping[t[i]] != s[i]){
                return false;
            }
            tsmapping[t[i]] = s[i];
        }
        return true;
    }
};