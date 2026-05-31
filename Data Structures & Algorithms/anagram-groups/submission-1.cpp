class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>map;

        for(string s : strs ){
            string key = s;

            sort(key.begin(),key.end());

            map[key].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto &it:map){
            ans.push_back(it.second);
        }
        return ans;
    }
};
