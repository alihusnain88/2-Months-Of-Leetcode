class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int size = nums.size();
        int minLen = INT_MAX;
        int sum = 0;
        int i = 0, j = 0;

        while (j < size)
        {
            sum += nums[j];
            if (sum >= target)
            {
                while (sum >= target)
                {
                    int currLen = j - i + 1;
                    minLen = min(currLen, minLen);
                    sum -= nums[i];
                    i++;
                }
            }
            j++;
        }
        if (minLen != INT_MAX)
            return minLen;

        return 0;
    }
};
