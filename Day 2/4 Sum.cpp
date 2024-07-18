class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        
        
        for (int i = 0; i < n - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            for(int j=n-1;j>=3;j--){
            if(j<n-1 && nums[j]==nums[j+1]) continue;
            int left = i + 1, right = j-1;
            long long sum2 = nums[i]+ nums[j];
            while (left < right) {
                long long sum = nums[left] + nums[right];
                
                if (sum == (long long)target - sum2) {
                    ans.push_back({nums[i], nums[j], nums[left], nums[right]});
                    
                    // Skip duplicate elements
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    
                    left++;
                    right--;
                } else if (sum < (long long)target-sum2) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        }
        
        return ans;
    }
};
