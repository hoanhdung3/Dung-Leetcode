class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = INT_MIN;
        int min_elem = INT_MAX;
        for(auto i : prices){
            min_elem = min(i, min_elem);
            ans = max(ans, i - min_elem);
        }
        return ans;
    }
};
