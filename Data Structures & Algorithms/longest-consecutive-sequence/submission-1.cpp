class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        unordered_map<int,int> seen;
        sort(nums.begin(),nums.end());
        for(auto num : nums){
            seen[num] = seen[num-1]+1;
            ans = max(ans, seen[num]);
        }
        return ans;

    }
};
