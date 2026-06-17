class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool result = false;
        int n = nums.size();
        map<int,int> mp;
        for(int i = 0; i<n; i++){
            if(mp[nums[i]]){
                result = true;
            }
            mp[nums[i]]++;
        }

        return result;
    }
};