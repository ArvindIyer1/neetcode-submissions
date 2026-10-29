class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();++i){
            mpp[nums[i]]++;
        }
        vector<vector<int>> bucket(nums.size() + 1);

        for(auto &p:mpp){
            bucket[p.second].push_back(p.first);
        }
        vector<int> ans;
        for(int i = bucket.size()-1;i>=1;--i){
            for(int n : bucket[i]){
                ans.push_back(n);

                if(ans.size() == k) return ans;
            }
        }
        return ans;
    }
};
