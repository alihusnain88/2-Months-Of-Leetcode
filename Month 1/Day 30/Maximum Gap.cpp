class Solution
{
public:
    int maximumGap(vector<int> &nums)
    {
        // With Brute Force
        int size = nums.size();
        if (size == 1)
        {
            return 0;
        }
        sort(nums.begin(), nums.end());
        int maxdiff = INT_MIN;
        for (int i = 1; i < size; i++)
        {
            maxdiff = max(maxdiff, abs(nums[i] - nums[i - 1]));
        }
        return maxdiff;
    }
};

