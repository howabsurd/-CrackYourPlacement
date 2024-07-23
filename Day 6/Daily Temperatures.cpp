class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(), 0);
        stack<pair<int,int>> st;

        for(int i = 0; i < temperatures.size(); i++) {
            while (!st.empty() && temperatures[i] > st.top().first) {
                auto [temp, index] = st.top();
                st.pop();
                ans[index] = i - index;
            }
            st.push({temperatures[i], i});
        }
        return ans;
    }
};