class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> m;
        int i = 0, j = 0;
        int maxLen = 0;
        while (j < s.size())
        {
            m[s[j]]++;
            int currLen = j - i + 1;
            while (m.size() != currLen && i < s.size())
            {
                m[s[i]]--;

                if (m[s[i]] == 0)
                {
                    // Remove it
                    m.erase(s[i]);
                }
                i++;
                currLen = j - i + 1;
            }
            maxLen = max(currLen, maxLen);
            j++;
        }
        return maxLen;
    }
};
