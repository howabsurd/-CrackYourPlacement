
// With extra space
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        int k = 0;
        for(auto x: nums){
            if(x == 0) k++;
            else ans.push_back(x);
        }
        while(k--){
            ans.push_back(0);
        }
        for(int i=0;i<nums.size();i++){
            nums[i] = ans[i];
        }
    }
};

// Without extra space
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] != 0) {
                swap(nums[right], nums[left]);
                left++;
            }
        }        
    }
};