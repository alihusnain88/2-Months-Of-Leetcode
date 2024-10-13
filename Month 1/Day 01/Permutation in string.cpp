class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        int size1 = s1.size();
        int size2 = s2.size();

        unordered_map<char, int> freq;

        for (char ch : s1)
            freq[ch]++;

        int windowSize = size1;
        int left = 0, right = 0;
        while (right < size2)
        {
            freq[s2[right]]--;
            if (freq[s2[right]] == 0)
            {
                freq.erase(s2[right]);
            }
            if (right - left + 1 == windowSize)
            {
                if (freq.size() != 0)
                {
                    freq[s2[left]]++;
                    if (freq[s2[left]] == 0)
                    {
                        freq.erase(s2[left]);
                    }
                    left++;
                }
                else
                    return true;
            }
            right++;
        }

        return false;
    }
};