class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        // unordered_map দিয়ে frequency count করবো
        // এখানে:
        // key   = nums array এর number
        // value = ওই number কয়বার এসেছে
        //
        // Example:
        // nums = [1,2,2,3,3,3]
        // mp হবে:
        // 1 -> 1
        // 2 -> 2
        // 3 -> 3
        unordered_map<int, int> mp;

        // nums array এর প্রতিটা element এক এক করে নিচ্ছি
        for (int x : nums) {

            // x number টার count 1 করে বাড়াচ্ছি
            //
            // যদি x আগে map এ না থাকে,
            // তাহলে mp[x] default 0 থেকে শুরু হবে
            //
            // Example:
            // x = 2 হলে mp[2]++
            // মানে 2 এর frequency 1 বাড়বে
            mp[x]++;
        }

        // priority_queue default ভাবে max heap
        // মানে যার value বড়, সেটা top এ থাকবে
        //
        // এখানে আমরা pair রাখবো:
        // pair.first  = frequency
        // pair.second = actual number
        //
        // Example:
        // nums = [1,2,2,3,3,3]
        // heap এ push হবে:
        // {1,1}, {2,2}, {3,3}
        //
        // max heap হওয়ায় top এ থাকবে {3,3}
        // কারণ frequency 3 সবচেয়ে বড়
        priority_queue<pair<int, int>> pq;

        // map এর সব key-value pair traverse করছি
        for (auto it : mp) {

            // it.first  = number
            // it.second = frequency
            //
            // কিন্তু heap এ আমরা frequency আগে রাখছি
            // কারণ priority_queue first value দিয়ে আগে compare করে
            //
            // তাই push করছি:
            // {frequency, number}
            pq.push({it.second, it.first});
        }

        // final answer রাখার জন্য vector
        vector<int> ans;

        // আমাদের top k frequent element দরকার
        // তাই k বার heap থেকে top element নিবো
        for (int i = 0; i < k; i++) {

            // pq.top() সবচেয়ে বেশি frequency ওয়ালা pair দিবে
            //
            // pq.top().first  = frequency
            // pq.top().second = actual number
            //
            // answer এ actual number লাগবে,
            // তাই pq.top().second নিচ্ছি
            ans.push_back(pq.top().second);

            // top element নেওয়ার পর heap থেকে remove করছি
            //
            // এতে next highest frequency element top এ চলে আসবে
            pq.pop();
        }

        // top k frequent numbers return করছি
        return ans;
    }
};