class Solution
{
public:
    string thousandSeparator(int n)
    {
        string str;
        int flag = 0;
        if (n == 0)
        {
            str += (char)48;
            return str;
        }
        while (n)
        {
            if (flag % 3 == 0 && flag != 0)
            {
                str = '.' + str;
            }
            str = (char)(n % 10 + 48) + str;
            n /= 10;
            flag++;
        }
        return str;
    }
};