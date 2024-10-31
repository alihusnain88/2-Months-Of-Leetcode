class Solution
{
public:
    bool kLengthApart(vector<int> &nums, int k)
    {
        int size = nums.size();
        int index = -1;
        for (int i = 0; i < size; i++)
        {
            if (nums[i] == 1)
            {
                if (index == -1)
                {
                    index = i;
                }
                else
                {
                    int distance = (i - index) - 1;
                    if (distance < k)
                    {
                        return false;
                    }
                    else
                    {
                        index = i;
                    }
                }
            }
        }
        return true;
    }
};