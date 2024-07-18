class Solution {
public:
    bool canJump(vector<int>& nums) {
       int n=nums.size();
       int reachable=0;
       for(int i=0;i<n;i++){
           if(i>reachable) return 0;
           else reachable= max(reachable, nums[i]+i);
       }
       return 1;
    }
};