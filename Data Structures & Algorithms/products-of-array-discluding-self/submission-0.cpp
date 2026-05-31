class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
              int n=nums.size();
       vector<int>ans(n,1);
        vector<int>preffix(n,1);
         vector<int>suffix(n,1);
      

        //preffix calculate
        for(int i=1;i<n;i++){
            preffix[i]=preffix[i-1]* nums[i-1];
        }

        //suffix calculate :
         for(int i=n-2;i>=0;i--){
            suffix[i]=suffix[i+1]* nums[i+1];
        }

        //ans calculate :
          for(int i=0;i<n;i++){
            ans[i] = suffix[i]*preffix[i];
        }

        return ans;

    }
};
