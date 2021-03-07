#include <iostream>
#include <vector>
using namespace std;
void removeDuplicate(vector<int> &vec, int n)
{
    int i = 0;
    while (i < n - 1)
    {
        if (vec[i] == vec[i + 1])
        {
            vec.erase(vec.begin() + i);
            n--;
            i--;
        }
        i++;
    }
}
int main()
{
    int n, temp;
    vector<int> vec;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        vec.push_back(temp);
    }
    removeDuplicate(vec, n);
    for (int a : vec)
    {
        cout << a << " ";
    }
    return 0;
}