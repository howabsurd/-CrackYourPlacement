class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       if (nums.empty()) return 0;

        int idx = 1; 
        int prev = nums[0];
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != prev) {
                nums[idx] = nums[i];
                prev = nums[idx];
                idx++;
            }
        }
        
        return idx;
    }
};