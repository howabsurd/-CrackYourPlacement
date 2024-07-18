class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        vector<int>prefixSum(k+1,0); vector<int> prefixSum2(k+1,0);
        prefixSum[1] = cardPoints[0]; prefixSum2[1] = cardPoints[n-1];
        for(int i=2;i<=k;i++){
            prefixSum[i] = prefixSum[i-1]+ cardPoints[i-1];
            prefixSum2[i] = prefixSum2[i-1]+ cardPoints[n-i];
        }
        int ans = 0;
        for(int i=0;i<=k;i++){
            ans = max(prefixSum[i]+prefixSum2[k-i], ans);
        }
        return ans;
    }
};