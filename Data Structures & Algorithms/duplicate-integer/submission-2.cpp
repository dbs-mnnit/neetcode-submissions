class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n==0)return false;
        map<int,int> mp;
        mp[nums[0]]++;
        for(int i=1;i<n;i++)
        {
            if(mp[nums[i]])
            {
                return true;
            }
            mp[nums[i]]++;
        }
        return false;
    }
};
