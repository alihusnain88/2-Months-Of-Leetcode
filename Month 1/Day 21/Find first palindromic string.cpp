class Solution
{
public:
    string firstPalindrome(vector<string> &words)
    {
        int size = words.size();
        for (int i = 0; i < size; i++)
        {
            if (isPalindrome(words[i]))
            {
                return words[i];
            }
        }
        return "";
    }
    bool isPalindrome(string s)
    {
        int size = s.size();
        int left = 0, right = size - 1;
        while (left < right)
        {
            if (s[left] != s[right])
            {
                return false;
            }
            left++, right--;
        }
        return true;
    }
};