#include <iostream>
using namespace std;

int prime(int n, int i = 2)
{
    if (n <= 1)
        return -1; // Not prime
    if (i * i > n)
        return 1; // Prime
    if (n % i == 0)
        return -1; // Not prime

    return prime(n, i + 1); // Check next divisor
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (prime(n) == 1)
    {
        cout << n << " is a prime number." << endl;
    }
    else
    {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}
