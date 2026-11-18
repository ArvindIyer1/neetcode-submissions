class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxs = nums[0],sum = 0;
        for(int n : nums){
            if(sum < 0) sum = 0;

            sum += n;
            maxs = max(maxs,sum);
        }
        return maxs;
    }
};
