class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;

        unordered_map<char,int>c_s;
        unordered_map<char,int>c_t;

        for(int i=0;i<s.size();i++){
            c_s[s[i]]++;
            c_t[t[i]]++;
        }

        return c_t==c_s;

    }
};
