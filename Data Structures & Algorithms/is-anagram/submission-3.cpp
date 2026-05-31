class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>fs;
        unordered_map<char,int>ts;
        for(char x:s){
            fs[x]++;
        }
         for(char x:t){
            ts[x]++;
        }

        if (ts==fs) return true ;

        return false ;
    }
};
