class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        for(auto s : strs){
            int len = s.length();
            result += to_string(len)+"#"+s;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> decoded;

        // stoi(str) -> stoi("231") = 231
        // s.substr(i,j) = s[i,j]

        int i = 0;
        while(i < s.length()){
            int j = i;

            string num = "";
            while(s[j] != '#'){
                num+=s[j];
                j++;
            }

            int len = stoi(num);
            cout<<"len "<<len<<"\n";
            string result = s.substr(j+1,len);
            decoded.push_back(result);
            i=j+len+1;
        }

        return decoded;
    }
};
