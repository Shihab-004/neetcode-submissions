class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int max_p=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(j>i){
                    int profit=prices[j]-prices[i];
                    max_p=max(profit,max_p);
                }
            }
        }

        return max_p;
    }
};