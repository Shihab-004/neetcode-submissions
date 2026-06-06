class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,max_len=0;
        unordered_set<char>st;
        while(r<s.size()){
            if(st.find(s[r]) == st.end()){ // repeate khuje na pai 
                st.insert(s[r]);
                int len=st.size();
                max_len=max(max_len,len);
                r++;
            }
            else {
                st.erase(s[l]);
                // int len=st.size();
                // max_len=max(max_len,len); // dorkar nai eta,, shrink hoile upate korar ...
                l++;
            }
        }
        return max_len;
    }
};
