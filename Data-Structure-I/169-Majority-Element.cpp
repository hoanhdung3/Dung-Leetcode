// solution 1:
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> m;
        int max_count = 0, ans = 0;
        for(int& i : nums){
            m[i]++;
            if(m[i] > max_count) ans = i;
            max_count = max(max_count, m[i]);
        }
        return ans;
    }
};

// solution 2:
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = nums[0], count = 1;
        for(int i=1; i<nums.size(); ++i){
            if(ans == nums[i]) count++;
            else count--;
            if(count==0){
                count = 1;
                ans = nums[i];
            }
        }
        return ans;
    }
};
