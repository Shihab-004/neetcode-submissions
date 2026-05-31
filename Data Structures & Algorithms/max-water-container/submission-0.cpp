class Solution {
public:
    int maxArea(vector<int>& heights) {
        int st=0;
        int end= heights.size()-1;
        int ans=INT_MIN;
        
        while(st<end){
            if (heights[st]>heights[end]){
                int max = heights[end] * (end-st);
                if(max>ans)  ans =max;
                end--;
            }
            else {
                int max = heights[st] * (end-st);
                if(max>ans)  ans =max;
                st++;
            }
           
        }
        return ans ;
    }
};
