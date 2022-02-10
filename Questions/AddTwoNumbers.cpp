#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, m, temp, i, j;
    cin >> n >> m;
    vector<int> vec1, vec2;
    for (i = 0; i < n; i++)
    {
        cin >> temp;
        vec1.push_back(temp);
    }
    for (i = 0; i < m; i++)
    {
        cin >> temp;
        vec2.push_back(temp);
    }
    reverse(vec1.begin(), vec1.end());
    reverse(vec2.begin(), vec2.end());
}