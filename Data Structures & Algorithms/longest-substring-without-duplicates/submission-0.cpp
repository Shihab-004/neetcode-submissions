class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool>count(256,0);
        int l=0,r=0,max_len=0;

        while(r<s.size()){
            while(count[s[r]]){
                count[s[l]]=0;
                l++;
            }
            count[s[r]]=1;
            max_len=max(max_len,r-l+1);
            r++;
        }
        return max_len;
    }
};
