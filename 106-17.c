#include <iostream>
using namespace std;
int x = 5;
float y = 2;
int func(int x, float y)
{
    return x + y;
}

int func(float x, int y)
{
    return x - y;
}

int main()
{
    cout << func(x, y) + func(y, x);
    return 0;
}