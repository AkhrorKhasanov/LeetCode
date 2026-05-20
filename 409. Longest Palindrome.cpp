class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> m;
        int res = 0;
        int one = 0;
        for (int i = 0; i < s.size(); i++)
        {
            m[s[i]]++;
        }
        for (auto e : m)
        {
            if (e.second % 2 == 1)
            {
                one = 1;
                res += e.second  - 1;
            }
            else
            {
                res += e.second;
            }
        }
        res += one;
        return res;
    }
};