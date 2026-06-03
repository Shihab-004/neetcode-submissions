class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int st=0;
        int end=1;
        int max_p=0;
        while(end<prices.size()){
           if(prices[end]>prices[st]){
            int profit=prices[end]-prices[st];
            max_p=max(profit,max_p);
            end++;

           }
           else {
            st=end;
            end=st+1;
           } 
             
        }

        return max_p;
    }
};