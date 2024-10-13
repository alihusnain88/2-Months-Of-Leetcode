<<<<<<< HEAD
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> indices;
        int size = nums.size();
        int iterator = 0;
        while (iterator < size)
        {
            int required = target - nums[iterator];
            if (indices.find(required) != indices.end())
            {
                return {iterator, indices[required]};
            }
            else
            {
                indices[nums[iterator]] = iterator;
            }
            iterator++;
        }
        return {};
    }
=======
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> indices;
        int size = nums.size();
        int iterator = 0;
        while (iterator < size)
        {
            int required = target - nums[iterator];
            if (indices.find(required) != indices.end())
            {
                return {iterator, indices[required]};
            }
            else
            {
                indices[nums[iterator]] = iterator;
            }
            iterator++;
        }
        return {};
    }
>>>>>>> ae440397800700864f535a2177c5ab51c55b41b1
};