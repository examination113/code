#include <iostream>
using namespace std;
int x = 15, y = 3;
int main()
{
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    cout << (y >> x);
}