class Solution
{
public:
    bool canAliceWin(vector<int> &nums)
    {
        int size = nums.size();
        int oursum = 0;
        int othersum = 0;
        for (int i = 0; i < size; i++)
        {
            if (nums[i] < 10)
                oursum += nums[i];
            else
                othersum += nums[i];
        }
        if (oursum > othersum)
        {
            return true;
        }
        else
        {
            oursum = 0;
            othersum = 0;
            for (int i = 0; i < size; i++)
            {
                if (nums[i] > 9 && nums[i] < 100)
                    oursum += nums[i];
                else
                    othersum += nums[i];
            }
        }
        return (oursum > othersum);
    }
};