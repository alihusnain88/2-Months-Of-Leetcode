class Solution
{
public:
    long long dividePlayers(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        int skill = nums[0] + nums[size - 1];
        int i = 0, j = size - 1;
        while (i < j)
        {
            if (nums[i] + nums[j] != skill)
            {
                return -1;
            }
            i++, j--;
        }
        long long chemistry = 0;
        i = 0, j = size - 1;
        while (i < j)
        {
            chemistry += (nums[i] * nums[j]);
            i++, j--;
        }
        return chemistry;
    }
};
