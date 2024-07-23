class Solution {
  public:
    bool isPossible(long long a[], long long b[], int n, long long k) {
        // Your code goes here
          std::sort(a, a + n);
        
        // Sort b in descending order
        std::sort(b, b + n, std::greater<long long>());
        
        // Check if there exists a permutation where a[i] + b[i] >= k for all i
        for(int i = 0; i < n; i++) {
            if(a[i] + b[i] < k) {
                return false; // Not possible
            }
        }
        
        return true; // Possible
    }
};