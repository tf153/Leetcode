class Solution
{
public:
    string reverseOnlyLetters(string s)
    {
        int i = 0, len = s.length(), j = len - 1;
        while (i < j)
        {
            while (!(isalpha(s[i])) && i < len)
            {
                i++;
            }
            if (i >= j)
                break;
            while (!(isalpha(s[j])) && j >= 0)
            {
                j--;
            }
            if (i >= j)
                break;
            if (i < j)
            {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};