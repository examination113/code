#include <iostream>
using namespace std;
static int n = 0;
class A
{
public:
    A() { n++; };
    ~A() { n++; };
};

void func()
{
    A a;
}

int main()
{
    A a;
    func();
    cout << n;
    return 0;
}