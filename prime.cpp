#include <iostream>
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n == 1)
        {

            return false;
        }

        if (n % i == 0)
        {

            return false;
        }
    }

    return true;
}
int main()
{

    int n;
    cout << "Enter the number you want to check for" << endl;
    cin >> n;

    if (isPrime(n))
    {
        cout << "The number is prime" << endl;
    }
    else
    {
        cout << "The number is composite" << endl;
    }

    return 0;
}