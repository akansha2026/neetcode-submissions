class Solution {
   public:
    bool isPalindrome(string s) {
        string t = "";
        for (auto& ch : s) {
            if (ch >= 'A' && ch <= 'Z') {
                char c = tolower(ch);
                t.push_back(c);
            } else if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
                t.push_back(ch);
        }

        cout << t << endl;

        int i = 0, j = t.size() - 1;

        while(i < j){
            if(t[i] != t[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};
