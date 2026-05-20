class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        string s = strs[0];
        int mini = 201;
        string mini_s;
        for (int i = 0; i < strs.size(); i++)
        {
            if (strs[i].size() < mini)
            {
                mini = strs[i].size();
                mini_s = strs[i];
            }
        }
        
        for (int i = 0; i < mini_s.size(); i++)
        {
            bool flag = true;
            char c = mini_s[i];
            for (int j = 0; j < strs.size(); j++)
            {
                if (strs[j][i] != c)
                {
                    flag = false;
                    break;
                }
            }
            if (!flag)
            {
                break;
            }
            else
            {
                res += c;
            }
        }
        return res;
    }
};