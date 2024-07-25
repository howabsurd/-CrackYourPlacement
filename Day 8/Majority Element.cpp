class Solution {
public:
    int majorityElement(vector<int>& nums) {

        // Boyer-Moore Voting Algorithm
        int candidate= nums[0], cnt=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]== candidate) cnt++;
            else{
                cnt--;
                if(cnt==0){
                    candidate = nums[i];
                    cnt=1;
                }
            }
        }
        return candidate ;
    }
};