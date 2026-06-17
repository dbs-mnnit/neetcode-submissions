class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        map<string,int> seen;
        for(auto s : strs){
            string temp = s;
            sort(temp.begin(),temp.end());
            cout<<"s = "<<s<<" temp = "<<temp<<endl;
            if(seen.find(temp)==seen.end()){
                result.push_back({s});
                seen[temp] = result.size()-1;
            } else {
                result[seen[temp]].push_back(s);
            }
        }
        return result;
    }
};
