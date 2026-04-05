#include <iostream>
using namespace std;
int main()
{
    int ch;
    cout << "Enter a operatino : ";
  
    cout << "1. Addition: ";
    cout << "2. Subtraction : ";
    cout << "3. Multiplication : ";
    cout << "4. Division : ";
    cout << "5. Modulation : ";
    cin >> ch;
  
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    switch (ch)
    {
    case 1:
    {
        cout << "Addition : " << a + b << endl;
        break;
    }
    case 2:
    {
        cout << "Subtraction : " << a - b << endl;
        break;
    }
    case 3:
    {
        cout << "Multiplication : " << a * b << endl;
        break;
    }
    case 4:
    {
        if (b != 0)
            cout << "Division : " << a / b << endl;
        else
            cout << "Division by zero is not allowed!" << endl;
        break;
    }
    case 5:
    {
        cout << "Modulation : " << a % b << endl;
        break;
    }
    default:
    {
        cout << "Invalid operation!" << endl;
    }
    }
}
