class Solution
{
public:
    int countPalindromicSubsequence(string s)
    {
        unordered_set<char> element_list;
        int ans = 0;
        for (auto i : s)
        {
            element_list.insert(i);
        }
        for (auto el : element_list)
        {
            int i = -1, j = 0;

            for (int k = 0; k < s.size(); k++)
            {
                if (s[k] == el)
                {
                    if (i == -1)
                    {
                        i = k;
                    }
                    j = k;
                }
            }

            unordered_set<char> between;//
            for (int a = i + 1; a < j; a++)
            {
                between.insert(s[a]);
            }
            ans += between.size();
        }
        return ans;
    }
};
