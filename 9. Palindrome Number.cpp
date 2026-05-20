class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
        {
            return false;
        }
        else if (x >= 0 && x <= 9)
        {
            return true;
        }
        else
        {
            bool res = true;
            string s = to_string(x);
            for (int i = 0; i < s.size() / 2; i++)
            {
                if (s[i] != s[s.size() - 1 - i])
                {
                    res = false;
                    break;
                }
            }
            return res;
        }
    }
};