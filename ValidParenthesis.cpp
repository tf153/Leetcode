#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
    string str;
    stack<char> stk;
    char temp;
    cin >> str;
    while (!str.empty())
    {
        temp = str[0];
        switch (temp)
        {
        case '(':
            stk.push(temp);
            break;
        case '{':
            stk.push(temp);
            break;
        case '[':
            stk.push(temp);
            break;
        case ')':
            if (stk.top() == '(')
            {
                stk.pop();
            }
            else
            {
                cout << "Not Ballanced";
                return 0;
            }
            break;
        case '}':
            if (stk.top() == '{')
            {
                stk.pop();
            }
            else
            {
                cout << "Not Ballanced";
                return 0;
            }
            break;
        case ']':
            if (stk.top() == '[')
            {
                stk.pop();
            }
            else
            {
                cout << "Not Ballanced";
                return 0;
            }
            break;
        default:
            cout << "Incorrect input";
            break;
        }
        str.erase(str.begin());
    }
    if (stk.empty())
    {
        cout << "Ballanced";
    }
    else
    {
        cout << "Not Ballanced";
    }
    return 0;
}