class Solution {
public:
    bool canJump(vector<int>& nums) {
        int gl = nums.size() -1;
        for(int i = nums.size()-2;i>=0;--i){
            if( i +nums[i] >= gl){
                gl = i;
            }
        }
        return gl == 0;
    }
};
