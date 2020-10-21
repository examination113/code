#include <iostream>
using namespace std;
int a1 = 1, a2 = 2, b1 = 1, b2 = 2;
void func1(int x, int y)
{
    int z;
    z = x;
    x = y;
    y = z;
}

void func2(int &x, int &y)
{
    int z;
    z = x;
    x = y;
    y = z;
}

int main()
{
    func1(a1, a2);
    func2(b1, b2);
    cout << a1 - b1 << " " << a2 - b2;
    return 0;
}