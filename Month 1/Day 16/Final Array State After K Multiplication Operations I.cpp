class Solution
{
public:
    vector<int> getFinalState(vector<int> &nums, int k, int multiplier)
    {
        for (int i = 1; i <= k; i++)
        {
            nums[getMinimum(nums)] *= multiplier;
        }
        return nums;
    }
    int getMinimum(vector<int> &nums)
    {
        int size = nums.size();
        int minimum = 0;
        for (int i = 1; i < size; i++)
        {
            if (nums[i] < nums[minimum])
            {
                minimum = i;
            }
        }
        return minimum;
    }
};