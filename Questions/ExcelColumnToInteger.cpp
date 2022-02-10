class Solution
{
public:
    string convertToTitle(int columnNumber)
    {
        string res = "";
        columnNumber--;
        while (columnNumber >= 0)
        {
            res += 'A' + columnNumber % 26;
            columnNumber /= 26;
            columnNumber--;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};