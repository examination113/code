#include <iostream>
using namespace std;
int func(int x)
{
    if (x <= 0)
    {
        return 0;
    }
    else if (x == 1)
    {
        return 1;
    }
    else
    {
        return func(x - 3) + func(x - 2) + func(x - 2);
    }
}

int main()
{
    cout << func(10);
    return 0;
}