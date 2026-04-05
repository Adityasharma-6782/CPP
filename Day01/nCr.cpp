#include <iostream>
using namespace std;

int fact(int n)
{
    if (n <= 1)
    {
      // Base case: factorial of 0 or 1 is 1
        return 1; 
    }
    return n * fact(n - 1); // Recursive case
}

int nCr(int n, int r)
{
    if (r < 0 || r > n)
    {
         // Check for valid input
        cout << "Invalid input: r must be between 0 and n." << endl;
        return -1;
    }
    else
    {
        return fact(n) / (fact(r) * fact(n - r)); // nCr formula 
    }
}

    int main()
    {
        int n, r;
        int ans;
        cout << "Enter n in nCr : ";
        cin >> n;
        cout << "Enter r in nCr : ";
        cin >> r;

        cout << "nCr = " << nCr(n, r) << endl; 
    }
