#include <iostream>
using namespace std;
int main()
{
    long sum = 0, a = 1, b = 2, temp;
    while (b < 4000000)
    {
        if (!(b & 1))
            sum += b;
        temp = a;
        a = b;
        b += temp;
    }
    cout << sum;
    return 0;
}