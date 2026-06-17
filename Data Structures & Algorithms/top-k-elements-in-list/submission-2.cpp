class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(auto num : nums){
            freq[num]++;
        }

        vector<vector<int>> bucket(nums.size()+1);

        for( auto [num, frequency] : freq){
            bucket[frequency].push_back(num);
        }
        vector<int> result;

        for(int i = nums.size(); i>=0; i--){
            for(auto num : bucket[i]){
                if(result.size()<k) result.push_back(num);
                else return result;
            }
        }
        return result;
    }
};
