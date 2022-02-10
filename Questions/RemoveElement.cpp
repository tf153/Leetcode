#include <iostream>
#include <vector>
using namespace std;
void removeElements(vector<int> &vec, int n, int temp)
{
    int i = 0;
    while (i < n)
    {
        if (vec[i] == temp)
        {
            vec.erase(vec.begin() + i);
            i--;
            n--;
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
    cin >> temp;
    removeElements(vec, n, temp);
    cout << vec.size() << "[";
    for (int a : vec)
    {
        cout << a << ",";
    }
    cout << "]";
    return 0;
}