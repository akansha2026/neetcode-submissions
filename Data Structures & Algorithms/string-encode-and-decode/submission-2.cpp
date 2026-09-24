class Solution {
    vector<string> temp;
public:

    string encode(vector<string>& strs) {
        string ans = "";

        for(auto &x:strs){
           ans += x;
           ans.push_back('#'); 
        }
        temp = strs;
        return ans;
    }

    vector<string> decode(string s) {
        return temp;
    }
};
