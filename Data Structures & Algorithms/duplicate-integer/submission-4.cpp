class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       unordered_set<int>s_num(nums.begin(),nums.end());
       if(s_num.size()==nums.size()){
        return false;
       }
       return true;
    }
};