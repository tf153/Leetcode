#include <iostream>
using namespace std;
int main()
{
    int n, ans = 0;
    cin >> n;
    if (n < 10)
    {
        cout << "Yes";
        return 0;
    }
    while (n)
    {
        ans *= 10;
        ans += n % 10;
        if (n == ans)
        {
            cout << "Yes";
            return 0;
        }
        n /= 10;
        if (n == ans)
        {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}