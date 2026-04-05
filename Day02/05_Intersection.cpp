#include <iostream>
using namespace std;
int main()
{
    int arr1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr2[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    for (int i = 0, j = 0; i < 10 && j < 10; i, j)
    {
        if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << endl;
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
}