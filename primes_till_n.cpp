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
    cout << "Enter the number till which you want number of total prime numbers" << endl;
    cin >> n;

    int count = 0;

    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            count++;
        }
    }

    cout << "The number of total primes till n are " << count << endl;

    return 0;
}