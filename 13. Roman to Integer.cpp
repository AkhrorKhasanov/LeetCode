class Solution {
public:
    int romanToInt(string s) {
        map<char, int> m;
        int res = 0;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (m[s[i + 1]] > m[s[i]])
            {
                res -= m[s[i]];
            }
            else
            {
                res += m[s[i]];
            }
        }
            res += m[s[s.size() - 1]];
        return res;
    }
};