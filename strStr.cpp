#include <iostream>
#include <string>
using namespace std;
int find(string str1, string str2)
{
    int len1 = str1.size(), len2 = str2.size();
    int i = 0, flag, j;
    while (i < len1 - len2)
    {
        if (str1[i] == str2[0])
        {
            j = 0;
            flag = 0;
            while (j < len2)
            {
                if (str1[i + j] == str2[j++])
                    flag++;
                else
                    break;
            }
            if (flag == len2)
                return i;
        }
        i++;
    }
    return -1;
}
int main()
{
    string str1, str2;
    cin >> str1;
    cin >> str2;
    cout << find(str1, str2);
    return 0;
}