class Solution {
   public:
    bool isVowelString(string s) {
        char st = s[0], e = s[s.size() - 1];

        if ((st == 'a' || st == 'i' || st == 'e' || st == 'o' || st == 'u') &&
            (e == 'a' || e == 'i' || e == 'e' || e == 'o' || e == 'u'))
            return true;

        return false;
    }

    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();

        vector<int> ans(n, 0);

        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (isVowelString(words[i])) {
                ans[i] = 1;
            }
        }

        vector<int> sum = ans;

        for (int i = 1; i < n; i++) {
            sum[i] = sum[i] + sum[i - 1];
        }

        vector<int> a;

        for (auto& v : queries) {
            int l = v[0];
            int r = v[1];
            int s = sum[r];
            if (l != 0) s = s - sum[l-1];
            a.push_back(s);
        }

        return a;
    }
};