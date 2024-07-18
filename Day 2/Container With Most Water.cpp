class Solution {
public:
    int maxArea(vector<int>& height) {
           int l=0;
        int r=height.size()-1;
        int ma=0;
        while(l<=r){
            int mi=min(height[l],height[r]);
            
            ma=max(ma,mi*(r-l));
            
            if(height[l]>height[r]){
                r--;
            }
            else{
                l++;
            }
        }
        return ma;
    }
};