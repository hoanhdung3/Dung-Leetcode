class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int a;
        for(int i = 0; i<n;i++){
            if(i == 0 || (i>0 && nums[i] != nums[i-1])){
                a = nums[i];
                int low = i+1 , high = n-1;
                while(low<high){
                    if(nums[low] + nums[high] > -a) high--;
                    else if(nums[low] + nums[high] < -a) low++;
                    else{
                        ans.push_back({a,nums[low],nums[high]});
                        while(low<high && nums[low] == nums[low+1]) low++;
                        while(low<high && nums[high] == nums[high-1]) high--;
                        low++; high--;
                    }
                }
            }
        }
        return ans;
    }
};
