class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int multi = 1,cnt =0;
        for(int i =0;i<nums.size();++i){
            if(nums[i] == 0) cnt++;
            else multi *= nums[i];
        }
        if(cnt > 1){
            return vector<int>(nums.size() ,0);
        }

        vector<int> res(nums.size());
        for(int i = 0;i<nums.size();++i){
            if(cnt > 0){
                res[i] = (nums[i] == 0) ? multi :0;
            }else{
                res[i] = multi / nums[i];
            }
        }
        return res;
    }
};
