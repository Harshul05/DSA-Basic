#include <iostream>
using namespace std;
int GCD(int a, int b)
{

    if (a == 0)
    {
        return b;
    }

    if (b == 0)
    {
        return a;
    }

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }

        if (b > a)
        {
            b = b - a;
        }

        if (b == a)
        {
            return a;
        }
    }
}
int main()
{
    int a, b;

    cout << "Enter the numbers for which you want GCD" << endl;
    cin >> a >> b;

    cout << "The GCD is " << GCD(a, b) << endl;
    return 0;
}