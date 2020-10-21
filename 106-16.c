#include <iostream>
using namespace std;
int n = 0;
class A
{
public:
    void func1() { n = n + 1; }
    virtual void func2() { n = n + 2; }
};

class B : public A
{
public:
    void func1() { n = n + 3; }
    void func2() { n = n + 4; }
};

int main()
{
    A *a[2];
    a[0] = new A();
    a[1] = new B();
    a[0]->func1();
    a[0]->func2();
    a[1]->func1();
    a[1]->func2();
    cout << n;
    return 0;
}