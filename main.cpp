#include <iostream>
using namespace std;
//////
int main()
{
    cout << "a) Двузначные числа, сумма квадратов цифр делится на 13:" << endl;
    for (int i = 10; i <= 99; i++)
    {
        int a = i / 10;
        int b = i % 10;
        if ((a * a + b * b) % 13 == 0)
            cout << i << " ";
    }
    cout << endl;

    cout << "b) Двузначные числа со свойством s + s*s = число:" << endl;
    for (int i = 10; i <= 99; i++)
    {
        int a = i / 10, b = i % 10, s = a + b;
        if (s + s * s == i)
            cout << i << " ";
    }
    cout << endl;
    return 0;
}
