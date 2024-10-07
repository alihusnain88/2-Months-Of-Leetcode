<<<<<<< HEAD
class Solution
{
public:
    int distinctAverages(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        int left = 0, right = size - 1;

        // unordered_map<double, int> m;
        set<double> averages;
        while (left < right)
        {
            double avg = (nums[left] + nums[right]) / 2.00;
            averages.insert(avg);
            left++;
            right--;
        }
        return averages.size();
    }
=======
class Solution
{
public:
    int distinctAverages(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        int left = 0, right = size - 1;

        // unordered_map<double, int> m;
        set<double> averages;
        while (left < right)
        {
            double avg = (nums[left] + nums[right]) / 2.00;
            averages.insert(avg);
            left++;
            right--;
        }
        return averages.size();
    }
>>>>>>> ae440397800700864f535a2177c5ab51c55b41b1
};