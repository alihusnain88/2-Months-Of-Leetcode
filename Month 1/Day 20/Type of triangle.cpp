class Solution
{
public:
    string triangleType(vector<int> &nums)
    {
        if (canFormTriangle(nums[0], nums[1], nums[2]))
        {
            return (type(nums));
        }
        return "none";
    }
    bool canFormTriangle(int a, int b, int c)
    {
        if (a + b <= c)
        {
            return false;
        }
        if (a + c <= b)
        {
            return false;
        }
        if (b + c <= a)
        {
            return false;
        }
        return true;
    }
    string type(vector<int> &arr)
    {
        if (arr[0] == arr[1] && arr[1] == arr[2])
        {
            return "equilateral";
        }
        if (arr[0] != arr[1] && arr[1] != arr[2] && arr[2] != arr[0])
        {
            return "scalene";
        }
        return "isosceles";
    }
};