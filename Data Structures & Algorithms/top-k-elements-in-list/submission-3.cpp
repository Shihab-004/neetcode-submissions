class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int ,int > mp;
        for (int x : nums ){
            mp[x]++;
        }
        vector<pair<int,int>>pr;
        for(auto & it : mp){
           pr.push_back({it.second,it.first});
        }
        sort(pr.rbegin(),pr.rend());
        vector<int>ans;
        for(int i=0;i<k;i++){
           ans.push_back(pr[i].second);
        }
        return ans  ;
    }
};
