class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int max_p=0;
    int st=0;
    int end=1;

    while(end < prices.size()){
        if(prices[st] > prices[end]){
            st=end;
            end++;
        }
        else{
            int profit= prices[end]-prices[st];
            end++;
            if(profit>max_p){
                max_p=profit;
            }
        }
    }  
    return max_p;  
    }
};
