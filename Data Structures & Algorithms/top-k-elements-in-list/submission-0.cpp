class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int,int> mp;
        for (auto c : nums) {
            mp[c]++;
        }

        
        vector<pair<int,int>> vi;
        for (auto c : mp) {
            vi.push_back({c.second, c.first});
        }

        
        sort(vi.begin(), vi.end(), greater<pair<int,int>>());

        
        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(vi[i].second);
        }

        return result;
    }
};