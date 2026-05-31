class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        //store in map 
        for(int x:nums){
            freq[x]++;
        }
        vector<pair<int ,int>>vec;
        for(auto & it:freq){
            vec.push_back({it.second,it.first});
        }
        sort(vec.rbegin(), vec.rend());

        vector<int>ans;

    for(int i=0;i<k;i++){
        ans.push_back(vec[i].second);

    }
    return ans;

    }
};
