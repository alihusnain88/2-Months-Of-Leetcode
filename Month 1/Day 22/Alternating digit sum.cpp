class Solution
{
public:
    int alternateDigitSum(int n)
    {
        string s = to_string(n);
        int i = 0, sum = 0;
        int size = s.size();

        while (i < size)
        {
            if (i < size)
            {
                sum += s[i] - '0';
                i++;
            }

            if (i < size)
            {
                sum -= s[i] - '0';
                i++;
            }
        }
        return sum;
    }
};