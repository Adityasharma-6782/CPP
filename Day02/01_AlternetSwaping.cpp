#include <iostream>
using namespace std;

void SwappingArray(int arr[], int n)
{
    for (int i = 0; i < n - 1; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }
}


void AfterSwapping(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter size of an Array : ";
    cin >> n;

    int arr[n];
    
    cout << "Enter the element of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    SwappingArray(arr, n);
    cout << "After Swapping Array :" << endl;
    AfterSwapping(arr, n);
    return 0;
}
