class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> cset;
        int ans = 0,l=0 ;

        for(int i=0;i<s.size();++i){
            
            while(cset.find(s[i]) != cset.end()){
                cset.erase(s[l]);
                l++;

                
            }
            cset.insert(s[i]);
            ans = max(ans,i-l+1);
        }
        return ans;
    }
};
