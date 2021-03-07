#include <iostream>
#include <vector>
using namespace std;
void permut(vector<int> vec, vector<int> vec2)
{
    if (vec2.empty())
    {
        for (int a : vec)
            cout << a;
        cout << endl;
        return;
    }
    int temp = vec2[0];
    vec2.erase(vec.begin());
    permut(vec, vec2);
    vec.push_back(temp);
    permut(vec, vec2);
}
int main()
{
    int n, temp;
    cin >> n;
    vector<int> vec, vec2;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        vec2.push_back(temp);
    }
    permut(vec, vec2);
    return 0;
}