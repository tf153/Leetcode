#include <iostream>
#include <queue>
#include <string>
#include <map>
using namespace std;
queue<char> longestSubstring(string str)
{
    map<char, int> mp;
    queue<char> que, ans;
    int max = 0;
    for (char c : str)
    {
        mp[c]++;
        que.push(c);
        max++;
        if (mp[c] > 1)
        {
            while (que.front() != c)
            {
                que.pop();
                max--;
            }
            mp[c]--;
            que.pop();
            max--;
        }
        if (max > que.size())
            ans = que;
    }
    return ans;
}
int main()
{
    string str;
    cin >> str;
    queue<char> que = longestSubstring(str);
    while (!que.empty())
    {
        cout << que.front();
        que.pop();
    }
    return 0;
}