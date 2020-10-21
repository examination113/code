#include <iostream>
using namespace std;
int a[10] = {8, 15, 23, 30, 7, 2, 10, 13, 6, 5};
void func1()
{
    int i, j, k;
    for (i = 9; i >= 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (a[j] > a[j + 1])
            {
                k = a[j];
                a[j] = a[j + 1];
                a[j + 1] = k;
            }
        }
    }
}

int func2(int x)
{
    int i = 0, j = 9, k;
    while (j >= i)
    {
        k = (i + j) / 2;
        if (x < a[k])
        {
            j = k - 1;
        }
        else if (x > a[k])
        {
            i = k + 1;
        }
        else
        {
            return k;
        }
    }
    return -1;
}

int main()
{
    func1();
    cout << func2(15);
    return 0;
}
