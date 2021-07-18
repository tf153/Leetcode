#include <bits/stdc++.h>
using namespace std;
int titleToNumber(string str)
{
    int ans = 0;
    for (char c : str)
    {
        ans *= 26;
        ans += c - 'A' + 1;
    }
    return ans;
}

int main()
{
    string str;
    cin >> str;
    cout << titleToNumber(str) << endl;
    return 0;
}
