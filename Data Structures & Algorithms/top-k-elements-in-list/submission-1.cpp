class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(auto num : nums){
            freq[num]++;
        }
priority_queue<
    pair<int,int>,
    vector<pair<int,int>>,
    greater<pair<int,int>>
> pq;
        for(auto [key, value] : freq){
            pq.push({value,key});
            if(pq.size()>k) pq.pop();
        }
        
        vector<int> result;
        while(!pq.empty()){
            auto [key,value] = pq.top();
            
            result.push_back(value);
            pq.pop();
        }
        return result;
    }
};
