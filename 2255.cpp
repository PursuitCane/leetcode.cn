class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int ans = 0;
        for (auto word : words) {
            bool mark = true;
            for (int i = 0; i < word.size(); i++) {
                if (word[i] != s[i]) {
                    mark = false;
                    break;
                }
            }
            if (mark) ans++;
        }
        return ans;
    }
};
