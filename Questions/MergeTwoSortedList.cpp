#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n1, n2, temp;
    vector<int> vec1, vec2, vec3;
    cin >> n1 >> n2;
    for (int i = 0; i < n1; i++)
    {
        cin >> temp;
        vec1.push_back(temp);
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> temp;
        vec2.push_back(temp);
    }
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (vec1[i] < vec2[j])
        {
            vec3.push_back(vec1[i++]);
        }
        else
        {
            vec3.push_back(vec2[j++]);
        }
    }
    if (i != n1)
    {
        while (i != n1)
        {
            vec3.push_back(vec1[i++]);
        }
    }
    else
    {
        while (j != n2)
        {
            vec3.push_back(vec2[j++]);
        }
    }
    cout << endl;
    for (int a : vec3)
    {
        cout << a;
    }
}