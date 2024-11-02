class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        int size = nums.size();
        double maximum = INT_MIN;
        double sum = 0;
        for (int i = 0; i < k; i++)
        {
            sum += nums[i];
        }
        double avg = sum / k;
        maximum = avg;
        for (int i = 1; i < size - (k - 1); i++)
        {
            sum -= nums[i - 1];
            sum += nums[i + (k - 1)];
            avg = sum / k;
            maximum = max(maximum, avg);
        }
        return maximum;
    }
};