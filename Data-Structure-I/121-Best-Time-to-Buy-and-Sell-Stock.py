class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        min_elem = prices[0]
        ans = 0
        for i in range(1, len(prices)):
            min_elem = min(prices[i], min_elem)
            ans = max(ans, prices[i] - min_elem)
        return ans
