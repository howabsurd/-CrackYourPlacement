class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        vector<int> rhs(n,0);
        rhs[n-1]=0; int mx = prices[n-1];
        for(int i=n-2;i>=0;i--){
            rhs[i] = mx;
            mx = max(prices[i], mx);
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            ans = max(ans , (rhs[i]- prices[i]));
        }
        return ans;
    }
};

// Using RHS
// Optimized Method
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int mn= prices[0];
        for(int i=1;i<prices.size();i++){
            mn= min(mn,prices[i]);
            res=max(res,(prices[i]-mn));
        }
        return max(0,res);
    }
};