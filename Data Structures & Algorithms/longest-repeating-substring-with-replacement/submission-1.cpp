class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>freq;
       int left =0,max_f=0,ans=0;
       for(int right=0;right<s.size();right++){
        freq[s[right]]++;

        max_f=max(max_f,freq[s[right]]);
        int window=right-left+1;

        while(window-max_f>k){
            freq[s[left]]--;
            left++;
            window=right-left+1;
        }
        ans = max(ans,window);

       }
       return ans ;
    }
};