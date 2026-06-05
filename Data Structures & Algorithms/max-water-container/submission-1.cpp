class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_a=0;
        int l=0;
        int r=height.size()-1;
        while(r>l){
            if(height[l]<height[r]){
                int a = height[l]*(r-l);
                max_a=max(max_a,a);
                l++;
            }
            else{
                int a = height[r]*(r-l);
                max_a=max(max_a,a);
                r--;
            }
        }
        return max_a;
    }
};