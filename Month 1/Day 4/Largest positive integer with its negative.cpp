<<<<<<< HEAD
class Solution
{
public:
    int findMaxK(vector<int> &nums)
    {
        int size = nums.size();
        unordered_map<int, int> m;
        for (int i : nums)
        {
            if (i < 0)
                m[i]++;
        }
        int maximum = -1;
        for (int i = 0; i < size; i++)
        {
            if (nums[i] > 0 && m.find(-nums[i]) != m.end())
            {
                maximum = max(nums[i], maximum);
            }
        }
        return maximum;
    }
=======
class Solution
{
public:
    int findMaxK(vector<int> &nums)
    {
        int size = nums.size();
        unordered_map<int, int> m;
        for (int i : nums)
        {
            if (i < 0)
                m[i]++;
        }
        int maximum = -1;
        for (int i = 0; i < size; i++)
        {
            if (nums[i] > 0 && m.find(-nums[i]) != m.end())
            {
                maximum = max(nums[i], maximum);
            }
        }
        return maximum;
    }
>>>>>>> ae440397800700864f535a2177c5ab51c55b41b1
};