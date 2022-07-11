// solution 1:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size()-1; ++i){
            for(int j=i+1; j<nums.size(); ++j){
                if(nums[i]+nums[j]==target) return {i, j};
            }
        }
        return {};
    }
};

// solution 2:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        for(int i=0; i<nums.size(); ++i){
            if(m.find(target-nums[i]) != m.end()){
                return {m[target - nums[i]], i};
            }
            m[nums[i]] = i;
        }
        return {};
    }
};
