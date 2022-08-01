// solution 1:
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count_zero = 0;
        for(auto i : nums){
            if(i==0) count_zero++;
        }
        vector<int> v(nums.size(), 0);
        int end = nums.size()-1;
        for(auto i : nums){
            if(i==1){
                v[count_zero] = 1;
                count_zero++;
            }
            else if(i==2){
                v[end] = 2;
                end--;
            }
        }
        nums = v;
    }
};

// solution 2:
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int beg = 0, run = 0, end = nums.size()-1; // beg and end are defined for checked position.
        while(run <= end){
            if(nums[run] == 2){
                int tmp = nums[end];
                nums[end] = nums[run];
                nums[run] = tmp;
                end--;
            }
            else if(nums[run] == 0){
                int tmp = nums[beg];
                nums[beg] = nums[run];
                nums[run] = tmp;
                beg++;
                run++;
            }
            else run++;
        }
    }
};
