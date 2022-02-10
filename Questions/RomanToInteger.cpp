#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    char temp;
    int ans = 0;
    cin >> str;
    while (!str.empty())
    {
        temp = str[0];
        str.erase(str.begin());
        switch (temp)
        {
        case 'i':
            ans++;
            break;
        case 'v':
            ans += 5;
            break;
        case 'x':
            ans += 10;
            break;
        case 'l':
            ans += 50;
            break;
        case 'c':
            ans += 100;
            break;
        case 'd':
            ans += 500;
            break;
        case 'm':
            ans += 1000;
            break;
        default:
            cout << "Invalid";
            break;
        }
    }
    cout << ans;
    return 0;
}