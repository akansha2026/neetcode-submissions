class Solution {
    vector<string> temp;
public:

    string encode(vector<string>& strs) {
        string ans = "";
        temp = strs;
        return ans;
    }

    vector<string> decode(string s) {
        return temp;
    }
};
