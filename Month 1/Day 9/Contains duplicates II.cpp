class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        int size = nums.size();
        unordered_map<int, int> mp;
        for (int i = 0; i < size; i++)
        {
            auto it = mp.find(nums[i]);
            {
                if (it != mp.end())
                {
                    int prevIndex = it->second;
                    if (abs(prevIndex - i) <= k)
                    {
                        return true;
                    }
                    else
                    {
                        it->second = i;
                    }
                }
                else
                {
                    mp[nums[i]] = i;
                }
            }
        }
        return false;
    }
};