#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 24, 3, 6, 19, 64, 37, 8, 19, 5};
    int i;
    for (i = 0; i < 10; i++)
    {
        for (int j = (i + 1); j < 10; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "Duplicate value at Index " << i << endl;
                break;
            }
        }
    }
    // ___________________________________________________________________________________________________

    
}