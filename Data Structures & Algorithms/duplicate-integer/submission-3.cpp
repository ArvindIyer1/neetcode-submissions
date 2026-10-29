class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int> mpp;
        for(int i =1;i<nums.size();++i){
            if(nums[i] == nums[i-1]) return true;
        }
        
        return false;
    }
};