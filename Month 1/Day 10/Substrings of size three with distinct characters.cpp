class Solution
{
public:
    int countGoodSubstrings(string s)
    {
        int size = s.size();
        if (size < 3)
        {
            return 0;
        }
        int count = 0;
        int left = 1, right = 3;
        if (s[0] != s[1] && s[0] != s[2] && s[2] != s[1])
        {
            count++;
        }
        while (right < size)
        {
            if (s[left] != s[left + 1] && s[left + 1] != s[right] && s[right] != s[left])
            {
                count++;
            }
            left++, right++;
        }
        return count;
    }
};
