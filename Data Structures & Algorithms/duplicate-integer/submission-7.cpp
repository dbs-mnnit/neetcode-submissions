class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> seen;
        for(auto num : nums){
            if(seen[num]){
                return true;
            }
            seen[num]++;
        }
        return false;
    }
    
};