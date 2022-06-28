class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN;
        int sum=0;
        for(auto i : nums){
            sum = max(i, sum+i);
            ans = max(ans, sum);
        }
        return ans;
    }
};
