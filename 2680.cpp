class Solution {
public:
    long long maximumOr(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long> prefix(n+1), suffix(n+1);
        for (int i = 0; i < n; i++) {
            prefix[i+1] = prefix[i] | nums[i];
            suffix[n-i-1] = suffix[n-i] | nums[n-i-1];
        }

        long long ans = 0;
        for (int i = 0; i < n; i++) {
            ans = max(ans, (((long long)nums[i]) << k) | prefix[i] | suffix[i+1]);
        }
        
        return ans;
    }
};
