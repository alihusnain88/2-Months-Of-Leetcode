class Solution
{
public:
    int maxVowels(string s, int k)
    {
        int size = s.size();
        int count = 0;
        int i = 0, j = 0;
        int maximum = INT_MIN;

        while (j < size)
        {
            if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
            {
                count++;
            }
            if (j - i + 1 > k)
            {
                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                {
                    count--;
                }
                i++;
            }
            maximum = max(count, maximum);
            j++;
        }

        return maximum == INT_MIN ? 0 : maximum;
    }
};